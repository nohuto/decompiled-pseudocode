/*
 * XREFs of ?NdisPDBMFreeCommonBuffer@@YAXPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@KT_LARGE_INTEGER@@PEAX@Z @ 0x140141690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDBMFreeCommonBuffer(struct KPushLockBase *a1, unsigned int a2, union _LARGE_INTEGER a3, void *a4)
{
  char v8; // [rsp+20h] [rbp-38h]
  KLockHolder v9; // [rsp+30h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v9, a1);
  if ( *((_BYTE *)&a1[3].m_Lock.0 + 1) )
  {
    MmFreeContiguousMemory(a4);
  }
  else
  {
    v8 = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, union _LARGE_INTEGER, void *, char))(*(_QWORD *)(*(_QWORD *)(a1[1].m_Lock.Value + 24)
                                                                                           + 8LL)
                                                                               + 24LL))(
      *(_QWORD *)(a1[1].m_Lock.Value + 24),
      a2,
      a3,
      a4,
      v8);
  }
  --HIDWORD(a1[3].m_Lock.Ptr);
  KLockHolder::~KLockHolder(&v9);
}
