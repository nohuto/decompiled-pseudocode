/*
 * XREFs of ?NdisPDFreeBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x14013D610
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x14013C5D0 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDFreeBufferSet(struct PD_BUFFER_SET_HANDLE__ *a1)
{
  struct PD_BUFFER_SET_HANDLE__ *v2; // rdi
  __int64 v3; // rcx
  struct PD_BUFFER_SET_HANDLE__ **v4; // rax
  _QWORD *v5; // rsi
  NDIS_PD_MEM_BLOCK *v6; // rbp
  KLockThisExclusive v7; // [rsp+40h] [rbp-38h] BYREF

  v2 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      83,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
  KLockThisExclusive::KLockThisExclusive(&v7, qword_14011EE98);
  v3 = *(_QWORD *)a1;
  if ( *(struct PD_BUFFER_SET_HANDLE__ **)(*(_QWORD *)a1 + 8LL) != a1
    || (v4 = (struct PD_BUFFER_SET_HANDLE__ **)*((_QWORD *)a1 + 1), *v4 != a1) )
  {
    __fastfail(3u);
  }
  *v4 = (struct PD_BUFFER_SET_HANDLE__ *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  *(_QWORD *)a1 = 0LL;
  KLockHolder::~KLockHolder(&v7);
  do
  {
    v5 = (_QWORD *)((char *)v2 + 64);
    v6 = v2;
    v2 = (struct PD_BUFFER_SET_HANDLE__ *)*((_QWORD *)v2 + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x1Du,
        0x54u,
        (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
        (char)a1,
        v6);
    *v5 = 0LL;
    NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v6);
  }
  while ( v2 );
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      85,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
}
