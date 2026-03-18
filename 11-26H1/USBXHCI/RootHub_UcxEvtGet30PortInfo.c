/*
 * XREFs of RootHub_UcxEvtGet30PortInfo @ 0x14004AA30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     RootHub_Read30PortSpeeds @ 0x140036FD0 (RootHub_Read30PortSpeeds.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_UcxEvtGet30PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int16 v4; // ax
  __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // r14
  int v8; // r9d
  __int64 v9; // r8
  unsigned int v10; // ecx
  unsigned __int16 v11; // bp
  unsigned __int16 i; // si
  __int64 v13; // r9
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v18; // [rsp+28h] [rbp-70h]
  _OWORD v19[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B0B0);
  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v19[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v4 = -1;
  }
  else
  {
    v4 = 40;
  }
  LOWORD(v19[0]) = v4;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v19);
  v5 = *((_QWORD *)&v19[0] + 1);
  v6 = **((_DWORD **)&v19[0] + 1);
  v7 = *(_QWORD *)(*((_QWORD *)&v19[0] + 1) + 8LL);
  if ( **((_DWORD **)&v19[0] + 1) < 0x10u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_11:
      v9 = 3221225485LL;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
               WdfDriverGlobals,
               a2,
               v9);
    }
    v8 = 206;
    v18 = **((_DWORD **)&v19[0] + 1);
LABEL_10:
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v6,
      11,
      v8,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      v18);
    goto LABEL_11;
  }
  LOWORD(v10) = *(_WORD *)(*((_QWORD *)&v19[0] + 1) + 4LL);
  if ( (_WORD)v10 != *(_WORD *)(v3 + 22) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v8 = 207;
    goto LABEL_15;
  }
  v10 = *(unsigned __int16 *)(*((_QWORD *)&v19[0] + 1) + 6LL);
  if ( v10 < 0xC )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_11;
    v8 = 208;
LABEL_15:
    LOBYTE(v18) = v10;
    goto LABEL_10;
  }
  v11 = 0;
  for ( i = 0; i < *(_WORD *)(v3 + 16) && v11 < *(_WORD *)(v5 + 4); ++i )
  {
    v13 = 120LL * i;
    if ( *(_BYTE *)(v13 + *(_QWORD *)(v3 + 48) + 13) == 3 )
    {
      **(_WORD **)(v7 + 8LL * v11) = i + 1;
      v14 = 116;
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v13 + 17) != 1 )
        v14 = 102;
      *(_DWORD *)(*(_QWORD *)(v7 + 8LL * v11) + 4LL) = v14;
      v15 = 116;
      if ( *(_BYTE *)(v3 + 56) != 1 )
        v15 = 102;
      *(_DWORD *)(*(_QWORD *)(v7 + 8LL * v11) + 8LL) = v15;
      *(_BYTE *)(*(_QWORD *)(v7 + 8LL * v11) + 2LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v13 + 12);
      *(_BYTE *)(*(_QWORD *)(v7 + 8LL * v11) + 3LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v13 + 14);
      if ( *(_WORD *)(v5 + 6) >= 0x18u )
      {
        v16 = RootHub_Read30PortSpeeds(
                v3,
                *(_QWORD *)(*(_QWORD *)(v7 + 8LL * v11) + 16LL),
                (unsigned __int16 *)(*(_QWORD *)(v7 + 8LL * v11) + 14LL),
                *(_WORD *)(*(_QWORD *)(v7 + 8LL * v11) + 12LL),
                *(_QWORD *)(*(_QWORD *)(v3 + 48) + v13 + 56),
                *(_WORD *)(*(_QWORD *)(v3 + 48) + v13 + 54),
                *(_BYTE *)(*(_QWORD *)(v3 + 48) + v13 + 12));
        v9 = v16;
        if ( v16 )
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v9);
      }
      ++v11;
    }
  }
  v9 = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v9);
}
