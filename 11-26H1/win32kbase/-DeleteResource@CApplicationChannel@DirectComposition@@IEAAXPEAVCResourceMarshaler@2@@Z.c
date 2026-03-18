/*
 * XREFs of ?DeleteResource@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x140129710
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1401293C0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall DirectComposition::CApplicationChannel::DeleteResource(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  int v2; // r8d
  unsigned __int64 v5; // rdx
  size_t v6; // r8
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a2 + 8);
  v5 = (unsigned int)(v2 - 1);
  if ( v2 && v5 < *((_QWORD *)this + 18) )
  {
    v6 = *((_QWORD *)this + 19);
    Src = 0LL;
    memmove((void *)(*((_QWORD *)this + 15) + v5 * v6), &Src, v6);
    --*((_QWORD *)this + 20);
  }
  (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a2 + 88LL))(a2, 1LL);
}
