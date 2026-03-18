/*
 * XREFs of EtwTraceTrappedAppContainerRender @ 0x1401D0E50
 * Callers:
 *     <none>
 * Callees:
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x14016028C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401D0C0C (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     McTemplateK0szsz_EtwWriteTransfer @ 0x1401D1184 (McTemplateK0szsz_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceTrappedAppContainerRender(PEPROCESS Process, PEPROCESS a2)
{
  char *v4; // rbx
  PACCESS_TOKEN v5; // r14
  PACCESS_TOKEN v6; // rsi
  char v7; // cl
  const WCHAR *v8; // rsi
  const WCHAR *v9; // r12
  void *ProcessImageFileName; // rbx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  const WCHAR *v15; // [rsp+40h] [rbp-20h] BYREF
  char *v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h] BYREF
  char v19; // [rsp+A0h] [rbp+40h] BYREF
  char v20; // [rsp+A8h] [rbp+48h] BYREF

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
  {
    v17 = 256LL;
    v18 = 256LL;
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v15, 0x100u);
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v16, 0x100u);
    if ( v15 )
    {
      v4 = v16;
      if ( v16 )
      {
        v20 = 0;
        v19 = 0;
        v5 = 0LL;
        v6 = PsReferencePrimaryToken(Process);
        RtlQueryPackageIdentity(v6, v15, &v17, 0LL, 0LL, &v20);
        PsDereferencePrimaryToken(v6);
        if ( a2 && (v5 = PsReferencePrimaryToken(a2), (int)RtlQueryPackageIdentity(v5, v4, &v18, 0LL, 0LL, &v19) < 0) )
        {
          v7 = 0;
          v19 = 0;
        }
        else
        {
          v7 = v19;
        }
        if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
        {
          v8 = &word_14025FAA8;
          v9 = &word_14025FAA8;
          if ( v7 )
            v9 = (const WCHAR *)v4;
          if ( a2 )
            ProcessImageFileName = (void *)PsGetProcessImageFileName(a2);
          else
            ProcessImageFileName = &unk_14025EF20;
          if ( v20 )
            v8 = v15;
          v11 = PsGetProcessImageFileName(Process);
          McTemplateK0szsz_EtwWriteTransfer(v13, v12, v14, v11, (__int64)v8, (__int64)ProcessImageFileName, (__int64)v9);
        }
        if ( v5 )
          PsDereferencePrimaryToken(v5);
      }
    }
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v16);
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((char **)&v15);
  }
}
