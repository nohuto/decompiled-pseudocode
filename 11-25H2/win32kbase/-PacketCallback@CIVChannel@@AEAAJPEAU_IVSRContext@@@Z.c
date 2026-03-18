/*
 * XREFs of ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x14021EBBC
 * Callers:
 *     ?sPacketCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x14021EF50 (-sPacketCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x14021EC98 (-Receive@CIVChannel@@AEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall CIVChannel::PacketCallback(CIVChannel *this, struct _IVSRContext *a2)
{
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  const void *v6; // rbp
  unsigned __int64 v7; // r15
  void *v8; // rax
  const void *v9; // rsi

  if ( !isChildPartition((__int64)this, (__int64)a2) )
    KeBugCheck(0x164u);
  v4 = *((_DWORD *)a2 + 40);
  v5 = *((_DWORD *)a2 + 44);
  v6 = (const void *)*((_QWORD *)a2 + 13);
  if ( !v4 )
  {
    v7 = *((_QWORD *)a2 + 14);
    v8 = (void *)Win32AllocPoolZInitImpl(256LL, v7, 0x6E705649u);
    v9 = v8;
    if ( !v8 )
      return CIVChannel::Receive(this);
    memmove(v8, v6, v7);
    v6 = v9;
  }
  if ( !(*((unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD, const void *, _QWORD))this + 3))(
          *(_QWORD *)this,
          v5,
          v4,
          v6,
          *((_QWORD *)a2 + 19)) )
    return 0LL;
  return CIVChannel::Receive(this);
}
