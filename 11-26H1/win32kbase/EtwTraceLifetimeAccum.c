/*
 * XREFs of EtwTraceLifetimeAccum @ 0x1400A7AA0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1400A7F4C (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     McTemplateK0xqnqNR3_EtwWriteTransfer @ 0x1400A80E8 (McTemplateK0xqnqNR3_EtwWriteTransfer.c)
 *     ?numRect@RGNCOREOBJ@@QEBAKXZ @ 0x1400A81D0 (-numRect@RGNCOREOBJ@@QEBAKXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall EtwTraceLifetimeAccum(int a1, char a2, struct REGION *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  struct _RGNDATA *v8; // rax
  char *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // [rsp+80h] [rbp+18h] BYREF

  if ( a3
    && (W32kEtwEnabledKeyword & 0x8000000000001000uLL) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x8000000000001000uLL) != 0
    && (qword_1402A9DC8 & 0x8000000000001000uLL) == qword_1402A9DC8 )
  {
    v13 = (char *)a3 + 24;
    v6 = WPP_MAIN_CB.Dpc.DeferredContext
       ? (*(__int64 (**)(void))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 248LL))()
       : 16 * RGNCOREOBJ::numRect((RGNCOREOBJ *)&v13);
    v7 = v6 + 32;
    if ( v6 != -32 )
    {
      v8 = (struct _RGNDATA *)Win32AllocPoolImpl(0x100uLL, v7, 0x79737355u);
      v9 = (char *)v8;
      if ( v8 )
      {
        if ( GrepGetRegionPtrData(a3, v7, v8) )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
            McTemplateK0xqnqNR3_EtwWriteTransfer((_DWORD)v9 + 16, (unsigned int)&ModifyRgnEvent, v11, a1, a2);
        }
        GreDeleteFastMutex(v9, v10, v11, v12);
      }
    }
  }
}
