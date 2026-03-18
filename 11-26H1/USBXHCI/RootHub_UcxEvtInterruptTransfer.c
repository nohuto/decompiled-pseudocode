/*
 * XREFs of RootHub_UcxEvtInterruptTransfer @ 0x14000B150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x140008FE0 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dD @ 0x14002CC88 (WPP_RECORDER_SF_dD.c)
 *     Controller_UpdateIdleTimeoutOnRootHubPDOD0Entry @ 0x14003A60C (Controller_UpdateIdleTimeoutOnRootHubPDOD0Entry.c)
 *     Controller_SetControllerGone @ 0x14003CE34 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x140046804 (WPP_RECORDER_SF_sds.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall RootHub_UcxEvtInterruptTransfer(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  __int16 v5; // ax
  __int64 v6; // r13
  _BYTE *v7; // rdi
  size_t v8; // rbx
  int v9; // edx
  unsigned int v10; // r15d
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  unsigned int i; // ebx
  __int64 v14; // rdx
  __int64 v15; // rdi
  char v16; // cl
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // r8d
  _BYTE *v20; // rdx
  unsigned int Ulong; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v25; // r9d
  char v26; // dl
  int v27; // r8d
  int v28; // r9d
  int v29; // edx
  char v30; // [rsp+30h] [rbp-88h]
  _BYTE *v31; // [rsp+40h] [rbp-78h]
  _OWORD v32[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B0B0);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL);
  memset(v32, 0, sizeof(v32));
  v33 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v32[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_4;
    }
    v5 = -1;
  }
  else
  {
    v5 = 40;
  }
  LOWORD(v32[0]) = v5;
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v32);
  v6 = *((_QWORD *)&v32[0] + 1);
  v7 = *(_BYTE **)(*((_QWORD *)&v32[0] + 1) + 40LL);
  v8 = *(unsigned int *)(*((_QWORD *)&v32[0] + 1) + 36LL);
  v31 = v7;
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 8) + 1001LL) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v26, v27, v28);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  if ( (unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( *(_BYTE *)(v3 + 57) )
    {
      Controller_UpdateIdleTimeoutOnRootHubPDOD0Entry(*(_QWORD *)(v3 + 8));
      *(_BYTE *)(v3 + 57) = 0;
    }
    v10 = 0;
    if ( (_DWORD)v8 )
    {
      memset(v7, 0, v8);
      if ( (unsigned int)v8 > 0x20 )
        v11 = 255;
      else
        v11 = 8 * v8 - 1;
      v12 = *(_DWORD *)(v3 + 16);
      if ( v11 <= v12 )
        v12 = v11;
      for ( i = 1; ; ++i )
      {
        while ( 1 )
        {
          if ( i > v12 )
            goto LABEL_28;
          v14 = i - 1;
          v15 = 120 * v14;
          v16 = *(_BYTE *)(120 * v14 + *(_QWORD *)(v3 + 48) + 13);
          if ( v16 == 2 )
            break;
          if ( v16 == 3 )
          {
            Ulong = XilRegister_ReadUlong(v4, *(_QWORD *)(v3 + 40) + 16 * v14);
            v18 = Ulong;
            if ( Ulong == -1 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v25 = 192;
                goto LABEL_34;
              }
LABEL_31:
              LOBYTE(v18) = 1;
              Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v18);
              *(_DWORD *)(v6 + 4) = -1073713152;
              v10 = -1073741810;
              return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
                       WdfDriverGlobals,
                       a2,
                       v10);
            }
            if ( (Ulong & 0xFA0000) != 0
              || ((v22 = *(_QWORD *)(v3 + 48), v23 = Ulong & 0x1E0, v23 == 320)
               || v23 == 192 && *(_DWORD *)(v22 + v15 + 108))
              && _InterlockedCompareExchange((volatile signed __int32 *)(v22 + v15 + 100), 0, 1) == 1 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v30 = v18;
                LOBYTE(v18) = 4;
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v18,
                  11,
                  193,
                  (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                  i,
                  v30);
              }
              if ( RootHub_HideInvalidDebugPortStatusAndChange(v3, i) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v29) = 4;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    v29,
                    11,
                    194,
                    (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                    i);
                }
              }
              else
              {
                v31[(unsigned __int64)i >> 3] |= 1 << (i & 7);
              }
            }
          }
LABEL_27:
          ++i;
        }
        v17 = XilRegister_ReadUlong(v4, *(_QWORD *)(v3 + 40) + 16 * v14);
        if ( v17 == -1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v25 = 190;
LABEL_34:
            LOBYTE(v18) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v18,
              11,
              v25,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
          }
          goto LABEL_31;
        }
        v19 = v17 & 0xFFBFFFFF;
        if ( (v17 & 0x1E0) != 0x1E0 )
          v19 = v17;
        if ( (v19 & 0x760000) == 0 )
          goto LABEL_27;
        v20 = &v31[(unsigned __int64)i >> 3];
        *v20 |= 1 << (i & 7);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_27;
        LOBYTE(v20) = 4;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          (_DWORD)v20,
          11,
          191,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          i,
          v19);
      }
    }
LABEL_28:
    *(_DWORD *)(v6 + 4) = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v9,
        11,
        189,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    }
    *(_DWORD *)(v6 + 4) = -1073713152;
    v10 = -1073741810;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v10);
}
