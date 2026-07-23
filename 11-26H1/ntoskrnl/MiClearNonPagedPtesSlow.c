/*
 * XREFs of MiClearNonPagedPtesSlow @ 0x140365970
 * Callers:
 *     MiClearNonPagedPtes @ 0x140365158 (MiClearNonPagedPtes.c)
 * Callees:
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiFinishDeleteNonPagedPtes @ 0x1403650CC (MiFinishDeleteNonPagedPtes.c)
 *     MiBeginDeleteNonPagedPtes @ 0x140365A2C (MiBeginDeleteNonPagedPtes.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiClearNonPagedPtesSlow(__int64 *a1, int a2, char a3, __int64 a4, __int64 a5)
{
  int v9; // r9d
  _OWORD v11[3]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v12; // [rsp+60h] [rbp-D8h]
  _BYTE v13[184]; // [rsp+70h] [rbp-C8h] BYREF
  _OWORD *v14; // [rsp+128h] [rbp-10h]

  memset_0(v13, 0, sizeof(v13));
  v12 = 0LL;
  LOBYTE(v9) = a3;
  v14 = v11;
  memset(v11, 0, sizeof(v11));
  MiBeginDeleteNonPagedPtes((unsigned int)v13, (_DWORD)a1, a2, v9, a4, a5);
  MiWalkPageTables((__int64)v13);
  return MiFinishDeleteNonPagedPtes(a1, (__int64)v13, 0);
}
