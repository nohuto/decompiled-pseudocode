/*
 * XREFs of ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x180036CE4
 * Callers:
 *     PsmHamReferenceHostId @ 0x1800353C0 (PsmHamReferenceHostId.c)
 * Callees:
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800367A0 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180036A5C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x180036B90 (-HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z.c)
 *     ?HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z @ 0x180036BD0 (-HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18003BC30 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

struct _HAM_HOSTID_ENTRY *__fastcall HamSrvHostIdStoreReferenceId(
        struct _HAM_HOSTID_STORE *a1,
        char *a2,
        void *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  __int64 v5; // r14
  unsigned __int64 v7; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  signed __int64 v12; // rbx
  _WORD *v13; // rcx
  __int16 v14; // ax
  _WORD *v15; // rax
  struct _HAM_RC_TREE_NODE *v16; // rbx
  struct _HAM_RC_TREE_NODE *Child; // rax
  struct _HAM_RC_TREE_NODE *v18; // r15
  struct _HAM_RC_TREE_NODE *v19; // rax
  struct _HAM_RC_TREE_NODE *v20; // rdi
  struct _HAM_RC_TREE_NODE *v21; // rax
  struct _HAM_RC_TREE_NODE *v22; // rsi
  struct _HAM_HOSTID_ENTRY *i; // rax
  __int64 *Value; // rax
  __int64 v25; // r8
  ULONGLONG Keyword; // rdx
  unsigned int v29; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DESCRIPTOR v30; // [rsp+38h] [rbp-C8h] BYREF
  ULONGLONG v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v33[232]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE DestinationSid[68]; // [rsp+230h] [rbp+130h] BYREF
  int v35; // [rsp+274h] [rbp+174h]
  int v36; // [rsp+278h] [rbp+178h]
  unsigned __int64 v37; // [rsp+280h] [rbp+180h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+290h] [rbp+190h] BYREF
  void *v39; // [rsp+2A0h] [rbp+1A0h]
  int v40; // [rsp+2A8h] [rbp+1A8h]
  int v41; // [rsp+2ACh] [rbp+1ACh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2B0h] [rbp+1B0h] BYREF
  void *v43; // [rsp+2C0h] [rbp+1C0h]
  int v44; // [rsp+2C8h] [rbp+1C8h]
  int v45; // [rsp+2CCh] [rbp+1CCh]
  _WORD *v46; // [rsp+2D0h] [rbp+1D0h]
  int v47; // [rsp+2D8h] [rbp+1D8h]
  int v48; // [rsp+2DCh] [rbp+1DCh]
  ULONGLONG *v49; // [rsp+2E0h] [rbp+1E0h]
  __int64 v50; // [rsp+2E8h] [rbp+1E8h]
  __int64 *v51; // [rsp+2F0h] [rbp+1F0h]
  __int64 v52; // [rsp+2F8h] [rbp+1F8h]
  _BYTE *v53; // [rsp+300h] [rbp+200h]
  int v54; // [rsp+308h] [rbp+208h]
  int v55; // [rsp+30Ch] [rbp+20Ch]
  int *v56; // [rsp+310h] [rbp+210h]
  __int64 v57; // [rsp+318h] [rbp+218h]

  v5 = -1LL;
  v7 = a4;
  v29 = a4;
  v10 = -1LL;
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    *(_DWORD *)&v30.Level = 260;
    *(_QWORD *)&EventDescriptor.Id = off_1800E12B8;
    *(_DWORD *)&v30.Id = 184549376;
    v30.Keyword = 64LL;
    LODWORD(EventDescriptor.Keyword) = *(unsigned __int16 *)off_1800E12B8;
    v39 = &unk_1800CF748;
    HIDWORD(EventDescriptor.Keyword) = 2;
    v40 = 20;
    v41 = 1;
    EventWriteTransfer(qword_1800E12D0, &v30, 0LL, 0LL, 2u, (PEVENT_DATA_DESCRIPTOR)&EventDescriptor);
  }
  memset_0(v33, 0, 0x228uLL);
  v11 = 232LL;
  v12 = a2 - (char *)v33;
  v13 = v33;
  do
  {
    if ( v11 == -2147483414 )
      break;
    v14 = *(_WORD *)((char *)v13 + v12);
    if ( !v14 )
      break;
    *v13++ = v14;
    --v11;
  }
  while ( v11 );
  v15 = v13 - 1;
  if ( v11 )
    v15 = v13;
  *v15 = 0;
  RtlCopySid(0x44u, DestinationSid, a3);
  v35 = v7;
  v30.Keyword = 0LL;
  v36 = 2;
  v37 = a5;
  *(_QWORD *)&v30.Id = a5;
  HampHostIdStoreAcquireLockShared(a1);
  v16 = 0LL;
  Child = HamRcNodeFindChild(
            (struct _HAM_HOSTID_STORE *)((char *)a1 + 16),
            (void *)v7,
            (__int64 (__fastcall *)(void *, __int64))HampHostIdStoreCompareSessionByKey);
  v18 = Child;
  if ( Child )
  {
    v19 = HamRcNodeFindChild(
            Child,
            DestinationSid,
            (__int64 (__fastcall *)(void *, __int64))HampHostIdStoreCompareUserByKey);
    v20 = v19;
    if ( v19 )
    {
      v21 = HamRcNodeFindChild(
              v19,
              v33,
              (__int64 (__fastcall *)(void *, __int64))HampHostIdStoreCompareApplicationByKey);
      v22 = v21;
      if ( v21 )
      {
        for ( i = HamRcNodeGetFirst(v21, 1); ; i = HamRcNodeGetSuccessor(v22, v16) )
        {
          v16 = i;
          if ( !i || !(unsigned int)HampHostIdStoreReferenceHostIdCallback(i, &v30) )
            break;
        }
        CemRcObjectDereference(v22);
      }
    }
    CemRcObjectDereference(v18);
    if ( v20 )
      CemRcObjectDereference(v20);
    if ( v16 )
      CemRcObjectDereference(v16);
  }
  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v25 = *Value;
    if ( (*Value & 0x800) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[12]-- == 1 )
      *Value = v25 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  RtlReleaseSRWLockShared(a1);
  Keyword = v30.Keyword;
  if ( v30.Keyword )
    v10 = *(_QWORD *)(v30.Keyword + 88);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v56 = (int *)&v29;
    v53 = DestinationSid;
    v32 = v10;
    v31 = v30.Keyword;
    v57 = 4LL;
    v55 = 0;
    v54 = 4 * DestinationSid[1] + 8;
    v51 = &v32;
    v49 = &v31;
    v52 = 8LL;
    v50 = 8LL;
    do
      ++v5;
    while ( v33[v5] );
    EventDescriptor.Keyword = 8LL;
    v46 = v33;
    v48 = 0;
    v47 = 2 * v5 + 2;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E12B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E12B8;
    v43 = &unk_1800CF690;
    UserData.Reserved = 2;
    v44 = 63;
    v45 = 1;
    EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
    return (struct _HAM_HOSTID_ENTRY *)v30.Keyword;
  }
  return (struct _HAM_HOSTID_ENTRY *)Keyword;
}
