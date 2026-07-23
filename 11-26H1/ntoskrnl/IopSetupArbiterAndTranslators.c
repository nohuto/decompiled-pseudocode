/*
 * XREFs of IopSetupArbiterAndTranslators @ 0x140B09784
 * Callers:
 *     IopResourceRequirementsListToReqList @ 0x140B09240 (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     IopTranslateAndAdjustReqDesc @ 0x1407A5CCC (IopTranslateAndAdjustReqDesc.c)
 *     IopFindLegacyBusDeviceNode @ 0x140AFBA64 (IopFindLegacyBusDeviceNode.c)
 *     IopQueryResourceHandlerInterface @ 0x140B09A60 (IopQueryResourceHandlerInterface.c)
 *     IopFindResourceHandlerInfo @ 0x140B26AF4 (IopFindResourceHandlerInfo.c)
 *     IopCallArbiter @ 0x140B35EE4 (IopCallArbiter.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSetupArbiterAndTranslators(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r11
  __int64 v5; // rcx
  char v6; // r12
  __int64 v7; // rax
  bool v8; // zf
  char v9; // si
  int v10; // eax
  char v11; // r13
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int16 v14; // r14
  __int64 i; // rax
  __int64 result; // rax
  int v17; // eax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r14
  char v21; // al
  __int16 v22; // di
  _QWORD *LegacyBusDeviceNode; // rax
  _QWORD *v24; // r9
  __int64 *v25; // rcx
  int v26; // eax
  __int64 v27; // rdi
  __int64 Pool2; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  __int64 *v32; // rcx
  __int64 v33; // rdi
  int v34; // eax
  char v35; // r9
  __int64 v36; // [rsp+20h] [rbp-38h]
  __int64 v37; // [rsp+28h] [rbp-30h]
  __int64 v38; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v39; // [rsp+38h] [rbp-20h] BYREF
  char v40; // [rsp+A0h] [rbp+48h]
  char v41; // [rsp+A8h] [rbp+50h]
  __int64 v42; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v43; // [rsp+B8h] [rbp+60h]

  v3 = 0LL;
  v41 = 1;
  v38 = 0LL;
  v5 = *(_QWORD *)(a1 + 72);
  v6 = 0;
  v43 = v5;
  LOBYTE(a3) = 0;
  v39 = 0LL;
  v7 = *(_QWORD *)(a1 + 32);
  v40 = 0;
  v42 = 0LL;
  LOBYTE(v7) = *(_BYTE *)(*(_QWORD *)(v7 + 64) + 1LL);
  v8 = (_BYTE)v7 == 7;
  v9 = v7;
  v10 = *(_DWORD *)(a1 + 80);
  if ( v8 )
    v9 = 3;
  if ( v10 != 1 || (v11 = 1, *(_DWORD *)a1) )
    v11 = 0;
  if ( !v5 || v10 == 1 )
    v12 = IopRootDeviceNode;
  else
    v12 = *(_QWORD **)(*(_QWORD *)(v5 + 312) + 40LL);
  while ( 1 )
  {
    if ( !v12 )
      return v6 == 0 ? 0xC000008A : 0;
    if ( v12 != IopRootDeviceNode || (_BYTE)a3 || v11 )
      break;
    v11 = 1;
    LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(*(_DWORD *)a1, *(_DWORD *)(a1 + 4));
    v5 = v43;
    v12 = LegacyBusDeviceNode;
    LOBYTE(a3) = v40;
    if ( LegacyBusDeviceNode == v24 )
    {
      v5 = v43;
      if ( **(_DWORD **)(*(_QWORD *)(a1 + 16) + 8LL) == (_DWORD)v3 )
      {
        v12 = IopFindLegacyBusDeviceNode(1, 0);
LABEL_23:
        v5 = v43;
        LOBYTE(a3) = v40;
      }
    }
  }
  if ( !v6 )
  {
    v20 = v12[4];
    if ( v20 != v5 )
    {
      LOBYTE(a3) = v9;
      v21 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64 *, __int64 *, __int64, __int64))IopFindResourceHandlerInfo)(
              2LL,
              v12,
              a3,
              &v38,
              v36,
              v37);
      v3 = 0LL;
      if ( !v21 )
      {
        if ( (unsigned __int8)v9 > 0xFu )
          v22 = 0;
        else
          v22 = 1 << v9;
        v26 = IopQueryResourceHandlerInterface(2LL, v20, a3, &v42);
        *((_WORD *)v12 + 263) |= v22;
        v3 = 0LL;
        if ( v26 >= 0 )
        {
          v27 = v42;
          goto LABEL_58;
        }
        *((_WORD *)v12 + 262) |= v22;
        if ( (unsigned __int8)v9 > 0xFu )
        {
          v27 = 0LL;
          v42 = 0LL;
LABEL_58:
          Pool2 = ExAllocatePool2(0x100uLL);
          v3 = 0LL;
          v29 = Pool2;
          if ( !Pool2 )
            return 3221225626LL;
          *(_WORD *)(Pool2 + 104) = 0;
          *(_QWORD *)(Pool2 + 96) = Pool2 + 88;
          *(_QWORD *)(Pool2 + 88) = Pool2 + 88;
          *(_QWORD *)(Pool2 + 80) = Pool2 + 72;
          *(_QWORD *)(Pool2 + 72) = Pool2 + 72;
          v30 = (_QWORD *)(Pool2 + 40);
          *(_QWORD *)(Pool2 + 48) = Pool2 + 40;
          v31 = (_QWORD *)(Pool2 + 56);
          *v30 = v30;
          v31[1] = v31;
          *v31 = v31;
          *(_QWORD *)(v29 + 8) = v29;
          *(_QWORD *)v29 = v29;
          *(_BYTE *)(v29 + 16) = v9;
          *(_QWORD *)(v29 + 32) = v12;
          v32 = (__int64 *)v12[62];
          if ( (_QWORD *)*v32 != v12 + 61 )
LABEL_74:
            __fastfail(3u);
          *(_QWORD *)v29 = v12 + 61;
          *(_QWORD *)(v29 + 8) = v32;
          *v32 = v29;
          v12[62] = v29;
          *(_QWORD *)(v29 + 24) = v27;
          v33 = v29 & -(__int64)(v27 != 0);
          v38 = v33;
          goto LABEL_62;
        }
      }
      v33 = v38;
LABEL_62:
      if ( v33 )
      {
        v6 = 1;
        if ( (*(_DWORD *)(*(_QWORD *)(v33 + 24) + 40LL) & 1) != 0 && (v34 = IopCallArbiter(v33, 7LL), v3 = 0LL, v34 < 0) )
        {
          v6 = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 288) = v33;
          *(_WORD *)(v33 + 104) = 0;
        }
      }
    }
  }
  if ( v41 == (_BYTE)v3 )
  {
LABEL_22:
    v12 = (_QWORD *)v12[2];
    goto LABEL_23;
  }
  a3 = v12 + 63;
  v13 = v3;
  v14 = 1 << v9;
  if ( ((unsigned __int16)(1 << v9) & (_WORD)v12[65]) != 0 )
    goto LABEL_21;
  if ( ((unsigned __int16)(1 << v9) & *((_WORD *)v12 + 261)) != 0 || (unsigned __int8)v9 > 0xFu )
  {
    for ( i = *a3; (__int64 *)i != a3; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 16) == v9 )
      {
        if ( (unsigned __int8)v9 <= 0xFu || *(_QWORD *)(i + 24) != v3 )
          v13 = i;
        if ( v13 )
LABEL_20:
          v40 = 1;
        goto LABEL_21;
      }
    }
    if ( (unsigned __int8)v9 > 0xFu )
      v14 = v3;
  }
  LOBYTE(a3) = v9;
  v17 = IopQueryResourceHandlerInterface(1LL, v12[4], a3, &v42);
  *((_WORD *)v12 + 261) |= v14;
  v3 = 0LL;
  if ( v17 < 0 )
  {
    *((_WORD *)v12 + 260) |= v14;
    if ( (unsigned __int8)v9 <= 0xFu )
      goto LABEL_21;
    v18 = 0LL;
    v42 = 0LL;
  }
  else
  {
    v18 = v42;
  }
  v19 = ExAllocatePool2(0x100uLL);
  v3 = 0LL;
  v13 = v19;
  if ( v19 )
  {
    *(_BYTE *)(v19 + 16) = v9;
    *(_QWORD *)(v19 + 8) = v19;
    *(_QWORD *)v19 = v19;
    *(_QWORD *)(v19 + 24) = v18;
    *(_QWORD *)(v19 + 32) = v12;
    v25 = (__int64 *)v12[64];
    if ( (_QWORD *)*v25 != v12 + 63 )
      goto LABEL_74;
    *(_QWORD *)v19 = v12 + 63;
    *(_QWORD *)(v19 + 8) = v25;
    *v25 = v19;
    v12[64] = v19;
    if ( v18 )
      goto LABEL_20;
    v13 = 0LL;
LABEL_21:
    if ( !v6 && v13 )
    {
      result = IopTranslateAndAdjustReqDesc(*(_QWORD *)(a1 + 32), v13, (__int64 *)&v39);
      v3 = 0LL;
      if ( (int)result < 0 )
        return result;
      a3 = v39;
      v35 = v41;
      v8 = *(_BYTE *)(v39[8] + 1) == 7;
      v9 = *(_BYTE *)(v39[8] + 1);
      v39[4] = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = a3;
      if ( v8 )
        v9 = 3;
      if ( (_DWORD)result == 288 )
        v35 = 0;
      v41 = v35;
    }
    goto LABEL_22;
  }
  return 3221225626LL;
}
