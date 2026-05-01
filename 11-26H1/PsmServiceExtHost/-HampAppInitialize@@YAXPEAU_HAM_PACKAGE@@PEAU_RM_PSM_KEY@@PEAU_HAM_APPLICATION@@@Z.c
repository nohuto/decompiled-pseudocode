/*
 * XREFs of ?HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z @ 0x1800341D4
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180037690 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 * Callees:
 *     CempLockInitialize @ 0x180034D44 (CempLockInitialize.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall HampAppInitialize(struct _HAM_PACKAGE *a1, struct _RM_PSM_KEY *a2, struct _HAM_APPLICATION *a3)
{
  __int64 v6; // rdx
  struct _RM_PSM_KEY *v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  int IsDynamicKey; // ecx
  int v11; // eax

  memset_0((char *)a3 + 88, 0, 0x218uLL);
  memset_0(a3, 0, 0x58uLL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 4) = (char *)a1 + 40;
  *((_QWORD *)a3 + 3) = 1LL;
  *((_QWORD *)a3 + 2) = -1LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a3 + 11) = a1;
  CempLockInitialize((char *)a3 + 584);
  v6 = 3LL;
  *((_QWORD *)a3 + 76) = (char *)a3 + 600;
  v7 = a2;
  *((_QWORD *)a3 + 75) = (char *)a3 + 600;
  v8 = (_OWORD *)((char *)a3 + 96);
  do
  {
    *v8 = *(_OWORD *)v7;
    v8[1] = *((_OWORD *)v7 + 1);
    v8[2] = *((_OWORD *)v7 + 2);
    v8[3] = *((_OWORD *)v7 + 3);
    v8[4] = *((_OWORD *)v7 + 4);
    v8[5] = *((_OWORD *)v7 + 5);
    v8[6] = *((_OWORD *)v7 + 6);
    v8 += 8;
    v9 = *((_OWORD *)v7 + 7);
    v7 = (struct _RM_PSM_KEY *)((char *)v7 + 128);
    *(v8 - 1) = v9;
    --v6;
  }
  while ( v6 );
  *v8 = *(_OWORD *)v7;
  v8[1] = *((_OWORD *)v7 + 1);
  v8[2] = *((_OWORD *)v7 + 2);
  v8[3] = *((_OWORD *)v7 + 3);
  v8[4] = *((_OWORD *)v7 + 4);
  IsDynamicKey = (unsigned __int8)PsmIsDynamicKey(a2);
  v11 = *((_DWORD *)a3 + 154);
  *((_DWORD *)a3 + 155) = 128;
  *((_DWORD *)a3 + 154) = v11 ^ (v11 ^ (IsDynamicKey << 16)) & 0x10000;
  *((_WORD *)a3 + 308) = 0;
}
