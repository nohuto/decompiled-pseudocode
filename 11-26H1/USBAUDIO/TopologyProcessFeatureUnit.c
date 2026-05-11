/*
 * XREFs of TopologyProcessFeatureUnit @ 0x14003F120
 * Callers:
 *     TopologyBuildFilterTopology @ 0x140041998 (TopologyBuildFilterTopology.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TopologyProcessFeatureUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  _DWORD *v6; // rcx
  __int64 v7; // r11
  unsigned int *v8; // rdx
  NTSTATUS v9; // ebx
  int v10; // r14d
  __int64 v11; // r15
  int v12; // ebp
  unsigned int v13; // r13d
  unsigned int *v14; // r12
  unsigned int v15; // r9d
  unsigned int v16; // r10d
  int v17; // esi
  __int64 v18; // rdi
  unsigned __int64 v19; // r8
  int v20; // ecx
  int v21; // edx
  unsigned __int64 v22; // rax
  int v23; // edx
  unsigned int v24; // eax
  __int64 (__fastcall *v25)(); // rcx
  __int64 (__fastcall *v26)(int, int, int, int, int, int, __int64); // rdx
  __int64 v27; // r13
  unsigned __int64 v28; // rax
  __int64 Pool2; // rax
  int v30; // r15d
  __int64 v31; // rbp
  __int64 v32; // r14
  _DWORD *v33; // r8
  GUID *v34; // rax
  __int64 result; // rax
  int v36; // [rsp+20h] [rbp-88h]
  int v37; // [rsp+24h] [rbp-84h]
  __int64 v38; // [rsp+28h] [rbp-80h]
  int v39; // [rsp+30h] [rbp-78h]
  __int64 v40; // [rsp+38h] [rbp-70h]
  __int64 v41; // [rsp+40h] [rbp-68h]
  unsigned __int64 v42; // [rsp+48h] [rbp-60h]
  __int64 v43; // [rsp+50h] [rbp-58h]
  __int64 v46; // [rsp+C0h] [rbp+18h]
  unsigned int v47; // [rsp+C8h] [rbp+20h]

  v46 = a3;
  v6 = a6;
  v7 = a2;
  v8 = a5;
  v9 = 0;
  v10 = *a6;
  v11 = *(_QWORD *)(v7 + 72);
  v12 = *(_DWORD *)(v7 + 68);
  v13 = *a5;
  v14 = (unsigned int *)(a4 + 16LL * *a6);
  v37 = *(_DWORD *)(v7 + 28);
  v47 = *a5;
  v38 = v11;
  v15 = **(_DWORD **)(v7 + 56);
  if ( v12 )
  {
    while ( 1 )
    {
      if ( v9 < 0 )
      {
LABEL_54:
        v6 = a6;
        v8 = a5;
        goto LABEL_55;
      }
      v16 = 0;
      v36 = v12 & (v12 - 1);
      v17 = v12 - v36;
      v12 = v36;
      v43 = v13;
      v18 = a3 + 168LL * v13;
      v19 = 0LL;
      *(_DWORD *)(v18 + 88) = 0;
      do
      {
        if ( (v17 & *(_DWORD *)(v11 + 4 * v19)) != 0 )
        {
          ++v16;
          v20 = (2 * v37) & (2 * v37 + 1);
          v21 = 2 * v37 + 1 - v20;
          if ( v19 )
          {
            v22 = v19;
            do
            {
              v23 = v20;
              v20 &= v20 - 1;
              v21 = v23 - v20;
              --v22;
            }
            while ( v22 );
          }
          *(_DWORD *)(v18 + 88) |= v21;
        }
        ++v19;
      }
      while ( v19 <= *(unsigned int *)(*(_QWORD *)(v7 + 56) + 4LL) );
      ++v10;
      v13 = v47;
      *(_DWORD *)(v18 + 80) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(v18 + 92) = v16;
      *v14 = v15;
      v14[1] = 0;
      v14[2] = v47;
      v14[3] = 1;
      v14 += 4;
      v39 = v10;
      if ( v17 == 1 )
        break;
      switch ( v17 )
      {
        case 2:
          v24 = 8;
          break;
        case 16:
          v24 = 9;
          break;
        case 32:
          v24 = 10;
          break;
        case 64:
          v24 = 11;
          break;
        default:
          switch ( v17 )
          {
            case 1024:
              v24 = 15;
              break;
            case 128:
              *(_QWORD *)(v18 + 136) = USBCntrlGetSetGEQ;
              v24 = 12;
              goto LABEL_33;
            case 256:
              v24 = 13;
              break;
            case 512:
              v24 = 14;
              goto LABEL_33;
            case 2048:
              v24 = 16;
              break;
            default:
              v9 = -1073741438;
              goto LABEL_53;
          }
          goto LABEL_31;
      }
      v25 = USBCntrlRestoreDbLevel;
      v26 = (__int64 (__fastcall *)(int, int, int, int, int, int, __int64))USBCntrlGetSetDbLevel;
LABEL_32:
      *(_QWORD *)(v18 + 136) = v26;
      *(_QWORD *)(v18 + 160) = v25;
LABEL_33:
      *(_DWORD *)(v18 + 76) = v24;
      v41 = 4LL * v24;
      v27 = v16;
      *(_QWORD *)(v18 + 8) = NodeDescriptorInfo[v41];
      *(_QWORD *)(v18 + 16) = NodeDescriptorInfo[v41 + 1];
      v28 = LODWORD(NodeDescriptorInfo[v41 + 2]) * (unsigned __int64)v16;
      v40 = LODWORD(NodeDescriptorInfo[v41 + 2]);
      v42 = v16;
      if ( v28 > 0xFFFFFFFF )
      {
        v9 = -1073741306;
        goto LABEL_50;
      }
      Pool2 = ExAllocatePool2(64LL, (unsigned int)v28, 1096972357LL);
      *(_QWORD *)(v18 + 128) = Pool2;
      if ( Pool2 )
      {
        v30 = *(_DWORD *)(v18 + 88);
        v31 = 0LL;
        v32 = -1LL;
        *(_DWORD *)(v18 + 96) = 0;
        if ( v27 )
        {
          while ( v9 >= 0 )
          {
            v33 = (_DWORD *)(*(_QWORD *)(v18 + 128) + v31 * v40);
            do
              ++v32;
            while ( (v17 & *(_DWORD *)(v38 + 4 * v32)) == 0 );
            *v33 = v31;
            v33[2] = v32;
            v33[1] = (v30 - (v30 & (unsigned int)(v30 - 1))) >> 1;
            v30 &= v30 - 1;
            v34 = NodeDescriptorInfo[v41 + 3];
            if ( v34 )
              v9 = ((__int64 (__fastcall *)(__int64, __int64))v34)(a1, v18);
            if ( v9 >= 0 )
              *(_DWORD *)(v18 + 96) |= 1 << v31;
            if ( ++v31 >= v42 )
            {
              if ( v9 < 0 )
                break;
              goto LABEL_46;
            }
          }
LABEL_47:
          ExFreePool(*(PVOID *)(168 * v43 + v46 + 128));
        }
        else
        {
LABEL_46:
          v9 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), *(PVOID *)(v18 + 128), ExFreePool);
          if ( v9 < 0 )
            goto LABEL_47;
        }
        v11 = v38;
        v10 = v39;
        v12 = v36;
        goto LABEL_49;
      }
      v9 = -1073741670;
LABEL_49:
      v7 = a2;
LABEL_50:
      v15 = v47 | 0x80000000;
      v13 = ++v47;
LABEL_53:
      a3 = v46;
      if ( !v12 )
        goto LABEL_54;
    }
    v24 = 7;
LABEL_31:
    v25 = USBCntrlRestoreBoolean;
    v26 = USBCntrlGetSetBoolean;
    goto LABEL_32;
  }
LABEL_55:
  *v8 = v13;
  result = (unsigned int)v9;
  *v6 = v10;
  return result;
}
