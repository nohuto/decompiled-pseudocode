/*
 * XREFs of ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800801E0
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180074560 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BCA0 (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpEnforcerContextInitialize@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083D04 (-RmpEnforcerContextInitialize@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpObjectTableInitialize@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x180084574 (-RmpObjectTableInitialize@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180087280 (-RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemEnableAsyncInSwap@@YAXXZ @ 0x18008C220 (-RmpSystemEnableAsyncInSwap@@YAXXZ.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpInitializeAllModules(struct _RM_RUNTIME_CONFIGURATION *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  bool v11; // zf
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __int128 v17; // xmm0
  int v18; // eax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-50h]

  memset_0(SystemInformation, 0, 0x40uLL);
  memset_0(a2, 0, 0xE98uLL);
  v4 = *((_OWORD *)a1 + 1);
  *((_OWORD *)a2 + 222) = *(_OWORD *)a1;
  v5 = *((_OWORD *)a1 + 2);
  *((_OWORD *)a2 + 223) = v4;
  v6 = *((_OWORD *)a1 + 3);
  *((_OWORD *)a2 + 224) = v5;
  v7 = *((_OWORD *)a1 + 4);
  *((_OWORD *)a2 + 225) = v6;
  v8 = *((_OWORD *)a1 + 5);
  *((_OWORD *)a2 + 226) = v7;
  v9 = *((_OWORD *)a1 + 6);
  *((_OWORD *)a2 + 227) = v8;
  v10 = *((_OWORD *)a1 + 8);
  *((_OWORD *)a2 + 228) = v9;
  v11 = (*(_BYTE *)a1 & 8) == 0;
  *((_OWORD *)a2 + 229) = *((_OWORD *)a1 + 7);
  v12 = *((_OWORD *)a1 + 9);
  *((_OWORD *)a2 + 230) = v10;
  v13 = *((_OWORD *)a1 + 10);
  *((_OWORD *)a2 + 231) = v12;
  *((_OWORD *)a2 + 232) = v13;
  if ( !v11 )
    RmpSystemEnableAsyncInSwap();
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  RmpPageSize = v23;
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 16));
  *((_QWORD *)a2 + 419) = 0LL;
  *((_QWORD *)a2 + 420) = 0LL;
  *((_QWORD *)a2 + 421) = 0LL;
  *((_QWORD *)a2 + 422) = 0LL;
  memset_0((char *)a2 + 800, 0, 0x580uLL);
  *((_QWORD *)a2 + 99) = a2;
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 816));
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 840));
  *((_QWORD *)a2 + 108) = 0LL;
  *((_QWORD *)a2 + 109) = 0LL;
  *((_QWORD *)a2 + 101) = (char *)a2 + 800;
  *((_QWORD *)a2 + 100) = (char *)a2 + 800;
  *((_QWORD *)a2 + 271) = (char *)a2 + 2160;
  *((_QWORD *)a2 + 270) = (char *)a2 + 2160;
  *((_DWORD *)a2 + 546) = -1;
  RmpEnforcerContextInitialize(a1, a2);
  RmpGameModeInitialize(a2, (struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2208));
  memset_0((char *)a2 + 312, 0, 0xC8uLL);
  *((_DWORD *)a2 + 126) &= 0xFFFFFFFC;
  *((_QWORD *)a2 + 62) = (char *)a2 + 488;
  *((_QWORD *)a2 + 61) = (char *)a2 + 488;
  *((_QWORD *)a2 + 39) = (char *)a2 + 312;
  *((_DWORD *)a2 + 96) = *((_DWORD *)a2 + 921);
  *((_DWORD *)a2 + 97) = *((_DWORD *)a2 + 922);
  *((_DWORD *)a2 + 99) = *((_DWORD *)a2 + 923);
  *((_DWORD *)a2 + 102) = 5;
  *((_DWORD *)a2 + 103) = 5;
  HampManagerInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2360));
  v14 = *((_OWORD *)a1 + 1);
  v15 = *((_OWORD *)a1 + 2);
  *(_WORD *)((char *)a2 + 625) = 0;
  *((_BYTE *)a2 + 627) = 0;
  *((_DWORD *)a2 + 161) = 0;
  v16 = *(_DWORD *)a1;
  *((_OWORD *)a2 + 32) = v14;
  *((_DWORD *)a2 + 154) = v16;
  v17 = *((_OWORD *)a1 + 3);
  v18 = *((_DWORD *)a1 + 1);
  *((_OWORD *)a2 + 33) = v15;
  *((_DWORD *)a2 + 155) = v18;
  *(_QWORD *)&v15 = *((_QWORD *)a1 + 8);
  *((_OWORD *)a2 + 34) = v17;
  v19 = *(_OWORD *)((char *)a1 + 72);
  *((_QWORD *)a2 + 70) = v15;
  v20 = *(_OWORD *)((char *)a1 + 88);
  *(_OWORD *)((char *)a2 + 568) = v19;
  v21 = *(_OWORD *)((char *)a1 + 104);
  *(_OWORD *)((char *)a2 + 584) = v20;
  *(_OWORD *)((char *)a2 + 600) = v21;
  *((_BYTE *)a2 + 624) = *((_BYTE *)a1 + 8);
  *((_DWORD *)a2 + 160) = *((_DWORD *)a1 + 31);
  *((_DWORD *)a2 + 159) = *((_DWORD *)a1 + 32);
  *((_DWORD *)a2 + 157) = *((_DWORD *)a1 + 30);
  *((_DWORD *)a2 + 158) = 60;
  memset_0((char *)a2 + 688, 0, 0x58uLL);
  RtlInitializeSRWLock((char *)a2 + 704);
  *((_OWORD *)a2 + 42) = 0LL;
  *(_OWORD *)((char *)a2 + 776) = 0LL;
}
