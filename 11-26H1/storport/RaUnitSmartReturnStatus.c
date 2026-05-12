/*
 * XREFs of RaUnitSmartReturnStatus @ 0x1400A1EE4
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1400A1658 (RaUnitSmartDataIoctl.c)
 * Callees:
 *     StorBuildSynchronousScsiRequest @ 0x140007A30 (StorBuildSynchronousScsiRequest.c)
 *     StorFreeSynchronousScsiRequest @ 0x140008740 (StorFreeSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x14000878C (PortSrbTranslateSrbToNtStatus.c)
 *     RaSendIrpSynchronous @ 0x140037340 (RaSendIrpSynchronous.c)
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 */

__int64 __fastcall RaUnitSmartReturnStatus(__int64 a1, unsigned __int64 a2, char *a3)
{
  __int64 v4; // rcx
  _BYTE *v7; // rdi
  unsigned __int8 v8; // si
  IRP *v9; // rax
  IRP *v10; // r13
  int Status; // ebp
  char v12; // r15
  char v13; // r9
  char v14; // r11
  unsigned int v15; // r14d
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // r10
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // ecx
  char v22; // al
  PDEVICE_OBJECT v23; // rcx
  int v24; // eax
  unsigned __int16 v25; // dx
  int v26; // r9d
  char v27; // r10
  _BYTE *v28; // rdx
  unsigned __int8 v29; // r8
  unsigned __int8 v30; // cl
  unsigned __int8 v31; // r8
  __int64 i; // r10
  unsigned __int8 v33; // cl
  _IO_STATUS_BLOCK v35; // [rsp+30h] [rbp-38h] BYREF
  char v36; // [rsp+70h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 8);
  v35 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = StorBuildSynchronousScsiRequest(v4, a2, (__int64)a3, &v35);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741801;
  Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v9);
  if ( Status < 0 )
    goto LABEL_71;
  Status = v10->IoStatus.Status;
  if ( Status < 0 )
    goto LABEL_71;
  v12 = *(_BYTE *)(a2 + 3);
  Status = PortSrbTranslateSrbToNtStatus(v12);
  if ( Status < 0 )
    goto LABEL_71;
  v13 = 1;
  if ( *(_BYTE *)(a2 + 2) != 40 )
  {
    v7 = *(_BYTE **)(a2 + 32);
    v8 = *(_BYTE *)(a2 + 11);
    goto LABEL_25;
  }
  v14 = 0;
  if ( *(_DWORD *)(a2 + 20) )
    goto LABEL_25;
  v15 = *(_DWORD *)(a2 + 56);
  v16 = 0LL;
  if ( !v15 )
    goto LABEL_25;
  while ( 1 )
  {
    v17 = *(unsigned int *)(a2 + 4 * v16 + 120);
    if ( (unsigned int)v17 >= 0x80 )
    {
      v18 = *(unsigned int *)(a2 + 16);
      if ( (unsigned int)v17 < (unsigned int)v18 )
        break;
    }
LABEL_20:
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= v15 )
      goto LABEL_25;
  }
  v19 = (unsigned int)v17;
  v20 = *(_DWORD *)(v17 + a2) - 64;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 == 1 && v19 + 40 <= v18 )
      {
        v7 = *(_BYTE **)(v19 + a2 + 24);
        goto LABEL_23;
      }
    }
    else if ( v19 + 56 <= v18 )
    {
      v7 = *(_BYTE **)(v19 + a2 + 16);
      v14 = 1;
      v8 = *(_BYTE *)(v19 + a2 + 9);
    }
    goto LABEL_19;
  }
  if ( v19 + 40 > v18 )
  {
LABEL_19:
    if ( v14 )
      goto LABEL_25;
    goto LABEL_20;
  }
  v7 = *(_BYTE **)(v19 + a2 + 16);
LABEL_23:
  v8 = *(_BYTE *)(v19 + a2 + 9);
LABEL_25:
  if ( v12 < 0 && v7 )
  {
    v22 = *v7 & 0x7F;
    if ( v22 == 114 || v22 == 115 )
    {
      v27 = 0;
      if ( v8 )
      {
        v28 = 0LL;
        v29 = 0;
        if ( (unsigned __int8)(v22 - 114) <= 1u )
        {
          if ( v7 + 8 <= &v7[v8] )
          {
            v30 = v7[7];
            if ( v30 <= 0xF7u )
            {
              v31 = v30 + 8;
              if ( (unsigned __int8)(v30 + 8) > v8 )
                v31 = v8;
              v29 = v31 - 8;
              if ( v29 )
              {
                v28 = v7 + 8;
                v27 = 1;
              }
            }
          }
          if ( v27 )
          {
            v36 = 9;
            if ( v28 )
            {
              if ( v29 )
              {
LABEL_54:
                if ( v29 >= 2u )
                {
                  for ( i = 0LL; ; i = 1LL )
                  {
                    if ( (_DWORD)i )
                    {
                      v33 = v28[1] + 2;
                      if ( v29 <= v33 )
                        goto LABEL_71;
                      v28 += v33;
                      v29 -= v33;
                      goto LABEL_54;
                    }
                    if ( *v28 == *(&v36 + i) )
                      break;
                  }
                  if ( v29 >= 0xEu && v28 )
                  {
                    if ( v28[9] != 0xF4 || v28[11] != 44 )
                      v13 = 0;
                    *a3 = v13;
                    v23 = WPP_GLOBAL_Control;
                    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                    {
                      v24 = (unsigned __int8)v28[11];
                      v26 = (unsigned __int8)v28[9];
                      v25 = 73;
                      goto LABEL_42;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if ( (unsigned __int8)(v22 - 112) <= 1u )
    {
      if ( v8 >= 0xCu )
      {
        if ( v7[10] != 0xF4 || v7[9] != 44 )
          v13 = 0;
        *a3 = v13;
        v23 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          v24 = (unsigned __int8)v7[9];
          v25 = 74;
          v26 = (unsigned __int8)v7[10];
LABEL_42:
          WPP_SF_DD(
            (__int64)v23->AttachedDevice,
            v25,
            (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
            v26,
            v24);
        }
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x4Bu,
        (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids);
    }
  }
  else
  {
    Status = -1073741823;
  }
LABEL_71:
  StorFreeSynchronousScsiRequest(v10);
  return (unsigned int)Status;
}
