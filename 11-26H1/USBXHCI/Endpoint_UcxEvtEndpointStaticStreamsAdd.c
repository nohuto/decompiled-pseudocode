/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x140048B90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x140001BD4 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_dddd @ 0x140045840 (WPP_RECORDER_SF_dddd.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     TR_Create @ 0x140081594 (TR_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsAdd(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  _DWORD *v6; // rbx
  __int64 v7; // r14
  __int64 *v8; // r12
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned int i; // r13d
  __int64 v15; // [rsp+28h] [rbp-61h]
  __int64 v16; // [rsp+30h] [rbp-59h]
  __int64 v17; // [rsp+38h] [rbp-51h]
  __int128 v18; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v19; // [rsp+68h] [rbp-21h]
  int v20; // [rsp+6Ch] [rbp-1Dh]
  int v21; // [rsp+70h] [rbp-19h] BYREF
  int v22; // [rsp+74h] [rbp-15h]
  void (__fastcall *v23)(__int64); // [rsp+78h] [rbp-11h]
  __int64 v24; // [rsp+80h] [rbp-9h]
  int v25; // [rsp+88h] [rbp-1h]
  int v26; // [rsp+8Ch] [rbp+3h]
  __int64 v27; // [rsp+90h] [rbp+7h]
  __int64 v28; // [rsp+98h] [rbp+Fh]
  void *v29; // [rsp+A0h] [rbp+17h]
  __int64 v30; // [rsp+100h] [rbp+77h] BYREF
  __int64 v31; // [rsp+108h] [rbp+7Fh] BYREF

  v30 = a3;
  v19 = 0;
  v22 = 0;
  v4 = a2;
  v18 = 0LL;
  v31 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006AFE8);
  v6 = (_DWORD *)(v5 + 152);
  v7 = v5 + 16;
  v8 = (__int64 *)(v5 + 80);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddd(
      *v8,
      4u,
      0xDu,
      0x67u,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)v7 + 143LL),
      *v6,
      v4);
  if ( !*(_BYTE *)(v5 + 37) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = *v6;
      LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)v7 + 143LL);
      WPP_RECORDER_SF_DD(*v8, 2u, 0xDu, 0x68u, (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids, v15, v16);
    }
    return (unsigned int)-1073741811;
  }
  if ( !(_DWORD)v4 || (unsigned int)v4 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 88LL) + 116LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v4;
      LODWORD(v16) = *v6;
      LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)v7 + 143LL);
      WPP_RECORDER_SF_ddd(
        *v8,
        2u,
        0xDu,
        0x69u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        v15,
        v16,
        v17);
    }
    return (unsigned int)-1073741811;
  }
  v22 = 0;
  v24 = 0LL;
  v27 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      v21 = -1;
    else
      v21 = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    v21 = 56;
  }
  v29 = off_14006B1A0;
  v23 = Endpoint_EvtStaticStreamsCleanupCallback;
  v25 = 1;
  v9 = 1;
  v26 = 1;
  v28 = 104 * v4 + 48;
  if ( *(_BYTE *)(v5 + 1352) )
    v9 = 2;
  v25 = v9;
  v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, int *, __int64 *))qword_14006BCA0)(
          UcxDriverGlobals,
          a1,
          &v30,
          &v21,
          &v31);
  if ( v10 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v31,
            off_14006B1A0);
    v12 = v11;
    *(_QWORD *)v11 = v5;
    *(_DWORD *)(v11 + 8) = v4;
    if ( (unsigned int)v4 >= 4 )
    {
      if ( (unsigned int)v4 >= 8 )
      {
        if ( (unsigned int)v4 >= 0x10 )
        {
          if ( (unsigned int)v4 >= 0x20 )
          {
            if ( (unsigned int)v4 >= 0x40 )
              *(_DWORD *)(v11 + 12) = 7 - ((unsigned int)v4 < 0x80);
            else
              *(_DWORD *)(v11 + 12) = 5;
          }
          else
          {
            *(_DWORD *)(v11 + 12) = 4;
          }
        }
        else
        {
          *(_DWORD *)(v11 + 12) = 3;
        }
      }
      else
      {
        *(_DWORD *)(v11 + 12) = 2;
      }
    }
    else
    {
      *(_DWORD *)(v11 + 12) = 1;
    }
    for ( i = 0; i < (unsigned int)v4; ++i )
    {
      v10 = TR_Create(*(_QWORD *)v5, v5, v31, i + 1, v12 + 104LL * i + 48);
      if ( v10 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v17) = i;
          LODWORD(v16) = *(_DWORD *)(v5 + 152);
          LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 143LL);
          WPP_RECORDER_SF_dddd(
            *(_QWORD *)(v5 + 80),
            2u,
            0xDu,
            0x6Bu,
            (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
            v15,
            v16,
            v17,
            v10);
        }
        return (unsigned int)v10;
      }
      *((_QWORD *)&v18 + 1) = *(_QWORD *)(*(_QWORD *)(v12 + 104LL * i + 48) + 72LL);
      *(_QWORD *)&v18 = 24LL;
      v20 = 0;
      v19 = i + 1;
      ((void (__fastcall *)(__int64, __int64, __int128 *))qword_14006BC98)(UcxDriverGlobals, v31, &v18);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v4;
      LODWORD(v16) = *(_DWORD *)(v5 + 152);
      LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 143LL);
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v5 + 80),
        4u,
        0xDu,
        0x6Cu,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        v15,
        v16,
        v17);
    }
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v17) = v10;
    LODWORD(v16) = *(_DWORD *)(v5 + 152);
    LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 143LL);
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      0x6Au,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      v15,
      v16,
      v17);
  }
  return (unsigned int)v10;
}
