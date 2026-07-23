/*
 * XREFs of PsQueryProcessCommandLine @ 0x1404AE810
 * Callers:
 *     SeAuditProcessCreation @ 0x140945DFC (SeAuditProcessCreation.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     PnpGetProcessCommandLine @ 0x140B41178 (PnpGetProcessCommandLine.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     MmCopyVirtualMemory @ 0x140A2B2B0 (MmCopyVirtualMemory.c)
 */

__int64 __fastcall PsQueryProcessCommandLine(
        PRKPROCESS PROCESS,
        unsigned __int16 *a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  int v8; // esi
  __int64 v9; // rcx
  __int64 *ReadyTime; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int16 epi16; // r14
  unsigned __int16 v15; // bx
  unsigned int ULongFromUser; // eax
  __int64 ULong64FromUser; // rax
  unsigned int v18; // esi
  _QWORD *v19; // rax
  _WORD *v20; // rdx
  BOOLEAN v22; // [rsp+40h] [rbp-D8h]
  __m128i v23; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v24; // [rsp+50h] [rbp-C8h]
  unsigned __int16 Address_2; // [rsp+62h] [rbp-B6h]
  __int64 v26; // [rsp+98h] [rbp-80h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+A0h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-70h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v26 = 0LL;
  RunRef = (PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink;
  v22 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
  if ( !v22 )
  {
    v8 = -1073741558;
    goto LABEL_37;
  }
  Address_2 = 0;
  v8 = 0;
  KeStackAttachProcess(PROCESS, &ApcState);
  v9 = 0LL;
  ReadyTime = (__int64 *)PROCESS[1].ReadyTime;
  if ( ReadyTime )
    v9 = *ReadyTime;
  if ( v9 )
  {
    ULongFromUser = RtlReadULongFromUser(v9 + 16);
    ULong64FromUser = RtlReadULong64FromUser(ULongFromUser + 64LL);
    Address_2 = WORD1(ULong64FromUser);
    v15 = ULong64FromUser;
    epi16 = WORD1(ULong64FromUser);
    v13 = HIDWORD(ULong64FromUser);
  }
  else
  {
    Blink = PROCESS[1].ProcessListEntry.Blink;
    if ( Blink )
    {
      v12 = RtlReadULong64FromUser(&Blink[2]) + 112;
      v23.m128i_i32[1] = 0;
      v23.m128i_i32[0] = RtlReadULongFromUser(v12);
      v23.m128i_i64[1] = RtlReadULong64FromUser(v12 + 8);
      Address_2 = v23.m128i_u16[1];
      v13 = _mm_srli_si128(v23, 8).m128i_u64[0];
      epi16 = _mm_extract_epi16(v23, 1);
      v15 = _mm_cvtsi128_si32(v23);
    }
    else
    {
      v8 = -1073741275;
      v13 = 0LL;
      epi16 = 0;
      v15 = 0;
    }
  }
  v24 = v13;
  ProbeForRead((volatile void *)v13, Address_2, 2u);
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  if ( v8 >= 0 )
  {
    if ( !v15 || v15 > epi16 || (v15 & 1) != 0 || (epi16 & 1) != 0 || !v24 )
    {
      v8 = -1073741275;
      goto LABEL_37;
    }
    v18 = epi16 + 16;
    if ( a5 )
    {
      if ( a4 )
        RtlWriteULongToUser(a5, v18);
      else
        *a5 = v18;
    }
    if ( a3 < v18 )
    {
      v8 = -1073741820;
      goto LABEL_37;
    }
    if ( a4 )
      RtlWriteUShortToUser(a2, v15);
    else
      *a2 = v15;
    if ( a4 )
      RtlWriteUShortToUser(a2 + 1, epi16);
    else
      a2[1] = epi16;
    v19 = a2 + 4;
    if ( epi16 )
    {
      if ( a4 )
      {
        v20 = a2 + 8;
LABEL_26:
        RtlWriteULong64ToUser(a2 + 4, v20);
        goto LABEL_35;
      }
      *v19 = a2 + 8;
    }
    else
    {
      if ( a4 )
      {
        v20 = 0LL;
        goto LABEL_26;
      }
      *v19 = 0LL;
    }
LABEL_35:
    v8 = MmCopyVirtualMemory(
           (_DWORD)PROCESS,
           v24,
           KeGetCurrentThread()->ApcState.Process,
           (int)a2 + 16,
           epi16,
           a4,
           (__int64)&v26);
    if ( v8 >= 0 )
      v8 = 0;
  }
LABEL_37:
  if ( v22 )
    ExReleaseRundownProtection_0(RunRef);
  return (unsigned int)v8;
}
