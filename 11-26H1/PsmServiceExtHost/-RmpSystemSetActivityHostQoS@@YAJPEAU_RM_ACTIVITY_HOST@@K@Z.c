/*
 * XREFs of ?RmpSystemSetActivityHostQoS@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180045CE4
 * Callers:
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180045B40 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpSystemSetActivityHostQoS(struct _RM_ACTIVITY_HOST *a1, unsigned int a2)
{
  __int64 v2; // rbx
  bool v4; // cf
  __int64 v5; // rax
  _BYTE v7[36]; // [rsp+40h] [rbp-68h] BYREF
  int v8; // [rsp+64h] [rbp-44h]
  __int64 v9; // [rsp+90h] [rbp-18h]

  v2 = a2;
  memset_0(v7, 0, 0x60uLL);
  v4 = *((_BYTE *)a1 + 648) != 0;
  v8 = 1;
  v5 = *((_QWORD *)a1 + 6);
  v9 = v2;
  return (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, _BYTE *))(*(_QWORD *)(v5 + 40) + 136LL))(
           (char *)a1 + 544,
           *((unsigned int *)a1 + 153),
           (char *)a1 + 80,
           *((unsigned int *)a1 + 154),
           *((_QWORD *)a1 + 4),
           v4 ? 4 : 0,
           v7);
}
