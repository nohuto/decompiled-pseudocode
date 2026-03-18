/*
 * XREFs of ?QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1400C258C
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z @ 0x1400FA384 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?ResetFontFileView@@YAXPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAK@Z @ 0x140326D64 (-ResetFontFileView@@YAXPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PFFOBJ::QueryAdvanceWidths(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        __int64 a4,
        unsigned int *a5,
        void *a6,
        unsigned int a7)
{
  unsigned int v7; // edi
  __int64 v10; // rdx
  ULONG_PTR *v11; // rsi
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 (__fastcall *v14)(struct DHPDEV__ *, struct _FONTOBJ *, __int64, unsigned int *, void *, unsigned int); // rbx
  unsigned int v15; // ebp
  unsigned int i; // ecx
  struct FONTFILEVIEW **v17; // r14
  struct FONTFILEVIEW *v18; // rdx
  unsigned int v19; // edi
  __int64 v20; // rbx
  unsigned int v23[2]; // [rsp+58h] [rbp-70h] BYREF
  int v24; // [rsp+60h] [rbp-68h]
  void *v25[2]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v26; // [rsp+78h] [rbp-50h]

  v7 = 0;
  v10 = *(_QWORD *)this;
  v11 = 0LL;
  v12 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  v14 = *(__int64 (__fastcall **)(struct DHPDEV__ *, struct _FONTOBJ *, __int64, unsigned int *, void *, unsigned int))(v13 + 3104);
  if ( _bittest((const signed __int32 *)(v13 + 40), 0xDu) )
  {
    v15 = *(_DWORD *)(v10 + 36);
    if ( v15 <= 3 )
    {
      if ( (*(_DWORD *)(v10 + 52) & 0x1000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v10);
      if ( _bittest((const signed __int32 *)(*(_QWORD *)this + 52LL), 0xDu) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v10);
      for ( i = 0; i < v15; ++i )
      {
        v17 = *(struct FONTFILEVIEW ***)(*(_QWORD *)this + 208LL);
        v18 = v17[i];
        if ( !*((_BYTE *)v18 + 45) && *((_BYTE *)v18 + 44) && !*((_QWORD *)v18 + 6) )
        {
          *(_OWORD *)v25 = 0LL;
          v26 = 0LL;
          *(_QWORD *)v23 = 0LL;
          v24 = 0;
          while ( 1 )
          {
            if ( v7 >= v15 )
            {
              v12 = v15;
              v11 = *(ULONG_PTR **)(*(_QWORD *)this + 208LL);
              goto LABEL_15;
            }
            if ( !(unsigned int)EngMapFontFileFDInternal(v17[v7]) )
              break;
            ++v7;
          }
          ResetFontFileView(v17, v7, v25, v23);
          break;
        }
      }
    }
  }
LABEL_15:
  v19 = v14(a2, a3, 1LL, a5, a6, a7);
  if ( v12 )
  {
    v20 = v12;
    do
    {
      EngUnmapFontFileFD(*v11++);
      --v20;
    }
    while ( v20 );
  }
  return v19;
}
