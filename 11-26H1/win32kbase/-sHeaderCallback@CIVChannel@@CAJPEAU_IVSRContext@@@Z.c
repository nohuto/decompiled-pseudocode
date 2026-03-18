/*
 * XREFs of ?sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x1402225F0
 * Callers:
 *     <none>
 * Callees:
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x14021F848 (-ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CIVChannel::sHeaderCallback(struct _IVSRContext *a1, int a2, int a3)
{
  unsigned int *v3; // rdi
  int v5; // ebp
  unsigned int v6; // esi
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  v3 = (unsigned int *)*((_QWORD *)a1 + 13);
  v11 = *((_OWORD *)a1 + 9);
  v5 = *((_DWORD *)a1 + 44);
  v6 = v3[2];
  v13 = *((_QWORD *)a1 + 20);
  if ( !isChildPartition((int)a1, a2, a3) || (v7 = *v3, LODWORD(v13) = v6, v7 < 4) )
    KeBugCheck(0x164u);
  v8 = *((_QWORD *)a1 + 17);
  v9 = *((_QWORD *)a1 + 16);
  v12 = v13;
  return ivrIVRecv(v7, v9, v8, &v11, v5, (__int64)CIVChannel::sPacketCallback);
}
