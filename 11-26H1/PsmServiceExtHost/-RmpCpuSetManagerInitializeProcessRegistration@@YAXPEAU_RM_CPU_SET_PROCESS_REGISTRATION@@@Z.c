/*
 * XREFs of ?RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800856F8
 * Callers:
 *     ?RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180085178 (-RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x1800299BC (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall RmpCpuSetManagerInitializeProcessRegistration(struct _RM_CPU_SET_PROCESS_REGISTRATION *a1)
{
  __int64 v2; // rax
  int v3; // r8d

  memset_0(a1, 0, 0x78uLL);
  v2 = HamObjectIdGenerate(3);
  *((_QWORD *)a1 + 4) = v2;
  *((_DWORD *)a1 + 10) = v3;
  *((_QWORD *)a1 + 2) = 1LL;
  *((_QWORD *)a1 + 1) = HIBYTE(v2)
                      + 37
                      * (BYTE6(v2)
                       + 37
                       * (BYTE5(v2)
                        + 37
                        * (BYTE4(v2)
                         + 37
                         * (BYTE3(v2) + 37 * (BYTE2(v2) + 37 * (BYTE1(v2) + 37 * ((unsigned __int8)v2 + 11623883LL)))))));
}
