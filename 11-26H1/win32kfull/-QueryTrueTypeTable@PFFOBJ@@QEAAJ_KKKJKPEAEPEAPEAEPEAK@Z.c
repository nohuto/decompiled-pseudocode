/*
 * XREFs of ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1400C2794
 * Callers:
 *     ?GrepGetFontData@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1401ED0AC (-GrepGetFontData@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x140328024 (-pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1400C3D54 (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?ResetFontFileView@@YAXPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAK@Z @ 0x140326D64 (-ResetFontFileView@@YAXPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PFFOBJ::QueryTrueTypeTable(
        PFFOBJ *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 *a7,
        unsigned __int8 **a8,
        unsigned int *a9)
{
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  __int64 v11; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // esi
  ULONG_PTR *v16; // r14
  unsigned int v17; // r12d
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *); // rbx
  unsigned int v20; // ebp
  __int64 i; // rcx
  struct FONTFILEVIEW **v22; // r13
  struct FONTFILEVIEW *v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rbx
  unsigned int v30[2]; // [rsp+78h] [rbp-80h] BYREF
  int v31; // [rsp+80h] [rbp-78h]
  void *v32[2]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v33; // [rsp+98h] [rbp-60h]

  v9 = a4;
  v10 = a3;
  v11 = a2;
  if ( !(unsigned int)PFFOBJ::bCheckFntFileInfo(this) )
    return 0xFFFFFFFFLL;
  v14 = *(_QWORD *)this;
  v15 = -1;
  v16 = 0LL;
  v17 = 0;
  v18 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  v19 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *))(v18 + 3064);
  if ( (*(_DWORD *)(v18 + 40) & 0x2000) != 0 )
  {
    v20 = *(_DWORD *)(v14 + 36);
    if ( v20 <= 3 )
    {
      if ( (*(_DWORD *)(v14 + 52) & 0x1000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
      if ( (*(_DWORD *)(*(_QWORD *)this + 52LL) & 0x2000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
      for ( i = 0LL; (unsigned int)i < v20; i = (unsigned int)(i + 1) )
      {
        v22 = *(struct FONTFILEVIEW ***)(*(_QWORD *)this + 208LL);
        v23 = v22[i];
        if ( !*((_BYTE *)v23 + 45) && *((_BYTE *)v23 + 44) && !*((_QWORD *)v23 + 6) )
        {
          *(_OWORD *)v32 = 0LL;
          v33 = 0LL;
          v24 = 0LL;
          *(_QWORD *)v30 = 0LL;
          v31 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v24 >= v20 )
            {
              v17 = v20;
              v16 = *(ULONG_PTR **)(*(_QWORD *)this + 208LL);
              goto LABEL_16;
            }
            if ( !(unsigned int)EngMapFontFileFDInternal(v22[v24]) )
              break;
            v24 = (unsigned int)(v24 + 1);
          }
          ResetFontFileView(v22, v24, v32, v30);
LABEL_16:
          v11 = a2;
          break;
        }
      }
      v9 = a4;
    }
    v10 = a3;
  }
  if ( a7 )
    *a7 = 0;
  if ( v19 )
    v15 = v19(v11, v10, v9, a5, a6, a7, a8, a9);
  if ( v17 )
  {
    v25 = v17;
    do
    {
      EngUnmapFontFileFD(*v16++);
      --v25;
    }
    while ( v25 );
  }
  return v15;
}
