/*
 * XREFs of ?NdisPDAddProviderToBMGroup@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@PEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x14013C6D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDAddProviderToBMGroup(
        struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1,
        struct NDIS_PD_PROVIDER_HANDLE__ *a2)
{
  unsigned int v2; // ebx
  char v3; // si
  struct NDIS_PD_PROVIDER_HANDLE__ *i; // rdi
  char *v6; // r8
  char *v7; // r9
  __int64 v8; // rax
  char **v9; // rax
  char **v10; // rax
  char v12[4]; // [rsp+38h] [rbp-40h]
  KLockThisExclusive v13; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0;
  v3 = (char)a2;
  for ( i = a2; *((_BYTE *)i + 88); i = (struct NDIS_PD_PROVIDER_HANDLE__ *)*((_QWORD *)i + 9) )
    ;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x48u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      a2);
  KLockThisExclusive::KLockThisExclusive(&v13, qword_14011EE98);
  v6 = (char *)(i + 4);
  if ( *((_QWORD *)i + 2) )
  {
    v2 = -1073741768;
    goto LABEL_16;
  }
  v7 = (char *)a1 + 24;
  v8 = *((_QWORD *)a1 + 3);
  if ( (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v8 != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 24) )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)i + 6) + 5488LL) + 72LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32)
                                                                                               + 5488LL)
                                                                                   + 72LL) )
    {
      v2 = -1073740007;
      goto LABEL_16;
    }
    v10 = (char **)*((_QWORD *)a1 + 4);
    if ( *v10 == v7 )
    {
      *(_QWORD *)v6 = v7;
      *((_QWORD *)i + 3) = v10;
      *v10 = v6;
      *((_QWORD *)a1 + 4) = v6;
      goto LABEL_16;
    }
LABEL_13:
    __fastfail(3u);
  }
  v9 = (char **)*((_QWORD *)a1 + 4);
  if ( *v9 != v7 )
    goto LABEL_13;
  *(_QWORD *)v6 = v7;
  *((_QWORD *)i + 3) = v9;
  *v9 = v6;
  *((_QWORD *)a1 + 4) = v6;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_18;
  WPP_RECORDER_SF_qq(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    4u,
    0x1Du,
    0x49u,
    (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
    (char)a1,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)i + 6) + 5488LL) + 72LL));
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = v2;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x4Au,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      v3,
      *(_DWORD *)v12);
  }
LABEL_18:
  KLockHolder::~KLockHolder(&v13);
  return v2;
}
