/*
 * XREFs of ?sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x14021EE50
 * Callers:
 *     <none>
 * Callees:
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x14021B05C (-ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CIVChannel::sHeaderCallback(struct _IVSRContext *a1, __int64 a2)
{
  unsigned int *v2; // rdi
  int v4; // ebp
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+60h] [rbp-18h]

  v2 = (unsigned int *)*((_QWORD *)a1 + 13);
  v10 = *((_OWORD *)a1 + 9);
  v4 = *((_DWORD *)a1 + 44);
  v5 = v2[2];
  v12 = *((_QWORD *)a1 + 20);
  if ( !isChildPartition((__int64)a1, a2) || (v6 = *v2, LODWORD(v12) = v5, (unsigned int)v6 < 4) )
    KeBugCheck(0x164u);
  v7 = *((_QWORD *)a1 + 17);
  v8 = *((_QWORD *)a1 + 16);
  v11 = v12;
  return ivrIVRecv(v6, v8, v7, &v10, v4, (__int64)CIVChannel::sPacketCallback);
}
