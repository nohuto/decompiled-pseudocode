/*
 * XREFs of SepGetLearningModeObjectInformation @ 0x1405109FC
 * Callers:
 *     SeLogAccessFailure @ 0x1403006A0 (SeLogAccessFailure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

struct _LIST_ENTRY *__fastcall SepGetLearningModeObjectInformation(_BYTE *a1)
{
  UNICODE_STRING *v2; // rsi
  void *v3; // r14
  void *v4; // r15
  struct _KTHREAD *CurrentThread; // rcx
  int v6; // eax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *result; // rax
  struct _KTHREAD *v9; // rcx
  struct _LIST_ENTRY *v10; // rdi
  __m128i *v11; // rbx
  __m128i *Flink; // rdi
  __m128i v13; // xmm6
  SIZE_T epi16; // r13
  _OWORD *Pool2; // rbx
  UNICODE_STRING *v16; // rax
  UNICODE_STRING *v17; // rdi
  UNICODE_STRING *v18; // rax
  size_t Size; // [rsp+A0h] [rbp+8h]
  void *Src; // [rsp+A8h] [rbp+10h]
  void *v21; // [rsp+B0h] [rbp+18h]

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentIrql() )
    v6 = 2;
  else
    v6 = CurrentThread->ApcState.InProgressFlags & 1;
  *a1 = 0;
  Blink = CurrentThread[1].WaitBlock[1].WaitListEntry.Blink;
  if ( Blink && LODWORD(Blink->Blink) == v6 )
    return Blink;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return 0LL;
  v9 = KeGetCurrentThread();
  if ( (v9->MiscFlags & 0x400) != 0 || v9->ApcStateIndex == 1 )
    result = 0LL;
  else
    result = (struct _LIST_ENTRY *)v9->Teb;
  if ( result )
  {
    v10 = result[2].Blink;
    if ( !v10 )
      return 0LL;
    ProbeForRead(result[2].Blink, 0x18uLL, 8u);
    if ( LODWORD(v10->Flink) != -1395763957 )
      return 0LL;
    v11 = (__m128i *)v10->Blink;
    Flink = (__m128i *)v10[1].Flink;
    ProbeForRead(v11, 0x10uLL, 8u);
    ProbeForRead(Flink, 0x10uLL, 8u);
    v13 = *Flink;
    Size = HIWORD(v11->m128i_u32[0]);
    Src = (void *)_mm_srli_si128(*v11, 8).m128i_u64[0];
    ProbeForRead(Src, Size, 2u);
    epi16 = (unsigned __int16)_mm_extract_epi16(v13, 1);
    v21 = (void *)_mm_srli_si128(v13, 8).m128i_u64[0];
    ProbeForRead(v21, epi16, 2u);
    Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      *Pool2 = 0LL;
      Pool2[1] = 0LL;
      Pool2[2] = 0LL;
      *((_QWORD *)Pool2 + 6) = 0LL;
      v16 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
      v17 = v16;
      if ( v16 )
      {
        *v16 = 0LL;
        v4 = (void *)ExAllocatePool2(0x100uLL);
        if ( v4 )
        {
          v18 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
          v2 = v18;
          if ( v18 )
          {
            *v18 = 0LL;
            v3 = (void *)ExAllocatePool2(0x100uLL);
            if ( v3 )
            {
              memmove(v4, Src, Size);
              RtlInitUnicodeString(v17, (PCWSTR)v4);
              memmove(v3, v21, epi16);
              RtlInitUnicodeString(v2, (PCWSTR)v3);
              *((_QWORD *)Pool2 + 2) = v17;
              *((_QWORD *)Pool2 + 3) = v2;
              *a1 = 1;
              return (struct _LIST_ENTRY *)Pool2;
            }
          }
        }
      }
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      ExFreePoolWithTag(Pool2, 0);
    }
    return 0LL;
  }
  return result;
}
