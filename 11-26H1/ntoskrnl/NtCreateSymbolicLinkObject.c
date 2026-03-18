/*
 * XREFs of NtCreateSymbolicLinkObject @ 0x140AB5400
 * Callers:
 *     DifNtCreateSymbolicLinkObjectWrapper @ 0x140673AF0 (DifNtCreateSymbolicLinkObjectWrapper.c)
 *     CreateSystemRootLink @ 0x140CA9EFC (CreateSystemRootLink.c)
 *     IopReassignSystemRoot @ 0x140CBDDA4 (IopReassignSystemRoot.c)
 * Callees:
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateSymbolicLink @ 0x140AB5768 (ObCreateSymbolicLink.c)
 */

__int64 __fastcall NtCreateSymbolicLinkObject(_QWORD *a1, int a2, _QWORD *a3, unsigned int *a4)
{
  char PreviousMode; // r13
  __m128i v9; // xmm6
  UNICODE_STRING *v10; // rax
  unsigned __int16 epi16; // ax
  unsigned __int16 v12; // bx
  unsigned int SymbolicLink; // edi
  struct _LIST_ENTRY *Flink; // r10
  unsigned int v15; // r9d
  __int64 v16; // rax
  unsigned int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v24; // rsi
  int ULongFromUser; // eax
  unsigned __int16 v26; // bx
  __int64 ULong64FromUser; // rax
  __int16 v28; // [rsp+30h] [rbp-158h] BYREF
  int v29; // [rsp+38h] [rbp-150h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-148h] BYREF
  UNICODE_STRING v31; // [rsp+50h] [rbp-138h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-128h] BYREF
  _OWORD v33[2]; // [rsp+70h] [rbp-118h] BYREF
  UNICODE_STRING v34; // [rsp+90h] [rbp-F8h]
  __int128 v35; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-D8h]
  __int64 v37; // [rsp+C0h] [rbp-C8h]
  int v38; // [rsp+C8h] [rbp-C0h]
  struct _EVENT_DATA_DESCRIPTOR UserData[6]; // [rsp+D0h] [rbp-B8h] BYREF

  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0;
  v31 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v31, 0LL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(&v35, a3, 0x30uLL);
    v24 = v36;
    if ( (_QWORD)v36 )
    {
      v34 = 0LL;
      ULongFromUser = RtlReadULongFromUser((unsigned int *)v36);
      v26 = ULongFromUser;
      *(_DWORD *)&v34.Length = ULongFromUser;
      v34.Buffer = (wchar_t *)RtlReadULong64FromUser((volatile void *)(v24 + 8));
      DestinationString = v34;
      ProbeForRead(v34.Buffer, v26, 1u);
    }
    v33[0] = 0LL;
    LODWORD(v33[0]) = RtlReadULongFromUser(a4);
    *((_QWORD *)&v33[0] + 1) = RtlReadULong64FromUser(a4 + 2);
    v9 = (__m128i)v33[0];
    v31 = (UNICODE_STRING)v33[0];
    ProbeForRead(*((volatile void **)&v33[0] + 1), WORD1(v33[0]), 1u);
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  else
  {
    v9 = *(__m128i *)a4;
    v31 = *(UNICODE_STRING *)a4;
    v10 = (UNICODE_STRING *)a3[2];
    if ( v10 )
      DestinationString = *v10;
  }
  if ( (v9.m128i_i8[2] & 1) != 0 )
  {
    epi16 = v9.m128i_i16[1] & 0xFFFE;
    v31.MaximumLength = v9.m128i_i16[1] & 0xFFFE;
    v9 = (__m128i)v31;
  }
  else
  {
    epi16 = _mm_extract_epi16(v9, 1);
  }
  if ( !epi16 )
    return 3221225485LL;
  v12 = _mm_cvtsi128_si32(v9);
  if ( v12 > epi16 || (v12 & 1) != 0 )
    return 3221225485LL;
  *(_QWORD *)&v33[0] = 4LL;
  *(__m128i *)((char *)v33 + 8) = v9;
  SymbolicLink = ObCreateSymbolicLink((_DWORD)a1, a2, (_DWORD)a3, (unsigned int)v33, PreviousMode);
  v30 = SymbolicLink;
  v29 = a2;
  Flink = EtwpSecurityLock.MutantListHead.Flink;
  if ( EtwpSecurityLock.MutantListHead.Flink )
  {
    v28 = 0;
    v15 = 0;
    if ( DestinationString.Buffer )
    {
      UserData[0].Ptr = (ULONGLONG)DestinationString.Buffer;
      UserData[0].Size = DestinationString.Length;
      UserData[0].Reserved = 0;
      v15 = 1;
    }
    v16 = v15;
    UserData[v16].Ptr = (ULONGLONG)&v28;
    *(_QWORD *)&UserData[v16].Size = 2LL;
    v17 = v15 + 1;
    if ( v31.Buffer )
    {
      v18 = v17;
      UserData[v18].Ptr = (ULONGLONG)v31.Buffer;
      UserData[v18].Size = v12;
      *(&UserData[0].Reserved + 1 * v18) = 0;
      ++v17;
    }
    v19 = v17;
    UserData[v19].Ptr = (ULONGLONG)&v28;
    *(_QWORD *)&UserData[v19].Size = 2LL;
    v20 = v17 + 1;
    v21 = v20;
    UserData[v21].Ptr = (ULONGLONG)&v29;
    *(_QWORD *)&UserData[v21].Size = 4LL;
    v22 = ++v20;
    UserData[v22].Ptr = (ULONGLONG)&v30;
    *(_QWORD *)&UserData[v22].Size = 4LL;
    EtwWrite((REGHANDLE)Flink, &KERNEL_AUDIT_API_CREATESYMBOLICLINKOBJECT, 0LL, v20 + 1, UserData);
  }
  return SymbolicLink;
}
