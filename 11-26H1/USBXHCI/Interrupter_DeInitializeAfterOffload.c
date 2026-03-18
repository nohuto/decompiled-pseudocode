/*
 * XREFs of Interrupter_DeInitializeAfterOffload @ 0x1400494D0
 * Callers:
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x140040B70 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 * Callees:
 *     XilRegister_WriteUlong64 @ 0x1400079C0 (XilRegister_WriteUlong64.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_i @ 0x140045AE8 (WPP_RECORDER_SF_i.c)
 *     XilRegister_ReadUlong64 @ 0x14004A0D0 (XilRegister_ReadUlong64.c)
 */

__int64 __fastcall Interrupter_DeInitializeAfterOffload(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  unsigned int *v4; // rdx
  __int64 v5; // rdi
  unsigned int Ulong; // eax
  unsigned int *v7; // rdx
  unsigned int v8; // eax
  unsigned int *v9; // rdx
  int v10; // eax
  int *v11; // rdx
  int v12; // r9d
  _QWORD *v13; // r8
  unsigned int i; // edx
  char v15; // r10
  int v16; // ebx
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rdx
  int v20; // ebp
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  _DWORD *v23; // rdx
  __int64 result; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 64));
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(unsigned int **)(v2 + 24);
  v5 = *(_QWORD *)(v3 + 88);
  if ( *(_BYTE *)(v5 + 137) )
    Ulong = *v4;
  else
    Ulong = XilRegister_ReadUlong(*(_QWORD *)(v3 + 88), v4);
  v7 = *(unsigned int **)(v2 + 24);
  v8 = Ulong & 0xFFFFFFFD;
  if ( *(_BYTE *)(v5 + 137) )
  {
    *v7 = v8;
    _InterlockedOr(v25, 0);
  }
  else
  {
    XilRegister_WriteUlong(v5, v7, v8);
  }
  v9 = *(unsigned int **)(v2 + 24);
  if ( *(_BYTE *)(v5 + 137) )
    v10 = *v9;
  else
    v10 = XilRegister_ReadUlong(v5, v9);
  if ( (v10 & 1) != 0 )
  {
    v11 = *(int **)(v2 + 24);
    if ( *(_BYTE *)(v5 + 137) )
    {
      *v11 = v10;
      _InterlockedOr(v25, 0);
    }
    else
    {
      XilRegister_WriteUlong(v5, v11, v10);
    }
  }
  v12 = 0;
  v13 = *(_QWORD **)(v2 + 176);
  i = 0;
  v15 = 0;
  v16 = 0;
  if ( (_QWORD *)(v2 + 176) != v13 )
  {
    while ( 2 )
    {
      v17 = v13[2];
      for ( i = 0; i < *(_DWORD *)(v2 + 132); ++i )
      {
        if ( v12 || i )
        {
          if ( v16 != (*(_DWORD *)(v17 + 16LL * i + 12) & 1) )
          {
            v15 = 1;
            goto LABEL_25;
          }
        }
        else
        {
          v16 = *(_DWORD *)(v17 + 12) & 1;
        }
      }
      v13 = (_QWORD *)*v13;
      ++v12;
      if ( (_QWORD *)(v2 + 176) != v13 )
        continue;
      break;
    }
  }
LABEL_25:
  v18 = v15 != 0 ? i : 0;
  v19 = *(_QWORD *)(v2 + 24) + 24LL;
  v20 = v15 != 0 ? v12 : 0;
  if ( !*(_BYTE *)(v5 + 137) )
    XilRegister_ReadUlong64(v5, v19);
  v21 = v20 & 7 | (*(_QWORD *)(*(_QWORD *)(v2 + 160) + 24LL) + 16 * v18) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v19) = 5;
    WPP_RECORDER_SF_i(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v19,
      9,
      66,
      (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
      v21);
  }
  v22 = *(_QWORD *)(v2 + 24);
  v23 = (_DWORD *)(v22 + 24);
  if ( !*(_BYTE *)(v5 + 137) )
    return XilRegister_WriteUlong64(v5, v23, v21);
  result = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 736LL);
  if ( (result & 1) != 0 )
  {
    *v23 = v21;
    _InterlockedOr(v25, 0);
    *(_DWORD *)(v22 + 28) = HIDWORD(v21);
  }
  else
  {
    *(_QWORD *)v23 = v21;
  }
  _InterlockedOr(v25, 0);
  return result;
}
