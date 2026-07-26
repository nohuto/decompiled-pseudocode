/*
 * XREFs of ?NdisPDDeleteBMGroup@@YAXPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x14013D4B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??3?$KALLOCATOR@$0GNEBEEEO@$00@@SAXPEAX@Z @ 0x14013C494 (--3-$KALLOCATOR@$0GNEBEEEO@$00@@SAXPEAX@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDDeleteBMGroup(struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1)
{
  __int64 v2; // rcx
  struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **v3; // rax
  KLockThisExclusive v4; // [rsp+30h] [rbp-28h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      77,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
  KLockThisExclusive::KLockThisExclusive(&v4, qword_14011EE98);
  if ( *((struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)a1 + 3) != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 24) )
    ndisBugCheckEx(0x23uLL, 6uLL, (ULONG_PTR)a1, *(_QWORD *)(*((_QWORD *)a1 + 2) + 80LL));
  v2 = *(_QWORD *)a1;
  if ( *(struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)(*(_QWORD *)a1 + 8LL) != a1
    || (v3 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)*((_QWORD *)a1 + 1), *v3 != a1) )
  {
    __fastfail(3u);
  }
  *v3 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  KLockHolder::~KLockHolder(&v4);
  KALLOCATOR<1832993870,1>::operator delete(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      78,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
}
