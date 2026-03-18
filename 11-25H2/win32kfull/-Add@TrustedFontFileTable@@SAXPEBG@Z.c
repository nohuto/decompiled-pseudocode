/*
 * XREFs of ?Add@TrustedFontFileTable@@SAXPEBG@Z @ 0x14026C5C4
 * Callers:
 *     ?GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401A2F68 (-GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BG@@@QEAA@PEAUtagSILOGLOBALS@@@Z @ 0x1401C60A8 (--0-$SEMOBJ@$0BG@@@QEAA@PEAUtagSILOGLOBALS@@@Z.c)
 */

void __fastcall TrustedFontFileTable::Add(PCWSTR SourceString, __int64 a2)
{
  __int64 SiloGlobals; // rdi
  HSEMAPHORE v4; // rbx
  struct _GRETHREAD *v5; // rax
  bool v6; // zf
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HSEMAPHORE v8; // [rsp+48h] [rbp+10h] BYREF

  DestinationString = 0LL;
  SiloGlobals = UserGetSiloGlobals(SourceString, a2);
  if ( RtlCreateUnicodeString(&DestinationString, SourceString) )
  {
    if ( *(_QWORD *)(SiloGlobals + 16) )
    {
      SEMOBJ<22>::SEMOBJ<22>(&v8, SiloGlobals);
      RtlInsertElementGenericTableAvl(*(PRTL_AVL_TABLE *)(SiloGlobals + 24), &DestinationString, 0x10u, 0LL);
      v4 = v8;
      if ( v8 )
      {
        EtwTraceGreLockReleaseSemaphore(L"TrustedFontFileTable", v8);
        v5 = GreGetCurrentThreadCrossSessionCheck();
        if ( v5 )
        {
          v6 = (*(_QWORD *)v5 & 0xFFFFFFFFFFBFFFFFuLL) == 0;
          *(_QWORD *)v5 &= ~0x400000uLL;
          if ( v6 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v4);
      }
    }
  }
}
