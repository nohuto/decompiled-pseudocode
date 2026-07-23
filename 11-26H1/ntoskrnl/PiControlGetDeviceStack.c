/*
 * XREFs of PiControlGetDeviceStack @ 0x140A93A48
 * Callers:
 *     PiControlGetPropertyData @ 0x140A93360 (PiControlGetPropertyData.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026F250 (IoGetAttachedDeviceReferenceWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1404902AC (IoGetLowerDeviceObjectWithTag.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlGetDeviceStack(__int64 a1, unsigned int a2, _WORD *a3, unsigned int *a4)
{
  __int64 v4; // rcx
  int v7; // ebx
  __int64 v8; // rsi
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  void *i; // rax
  void *v11; // rdi
  PVOID **Pool2; // rax
  PVOID *v13; // rcx
  void *v14; // rcx
  unsigned int v15; // r14d
  PVOID *v16; // rdi
  __int64 v18; // rax
  PVOID *v19; // r13
  unsigned int v20; // edx
  _WORD *v21; // r12
  int v22; // r14d
  __int64 v23; // r15
  unsigned __int16 Length; // di
  _WORD *v25; // rax
  unsigned int v26; // r8d
  __m128i v27; // xmm1
  wchar_t *v28; // xmm0_8
  unsigned int v29; // [rsp+30h] [rbp-38h]
  PVOID Object; // [rsp+38h] [rbp-30h]
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  int v34; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v35; // [rsp+B8h] [rbp+50h]
  _WORD *v36; // [rsp+C0h] [rbp+58h]
  unsigned int *v37; // [rsp+C8h] [rbp+60h]

  v37 = a4;
  v36 = a3;
  v35 = a2;
  v4 = *(_QWORD *)(a1 + 32);
  p_P = &P;
  v34 = 0;
  P = &P;
  v7 = 0;
  DestinationString = 0LL;
  v8 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v4, 0x43706E50u);
  Object = DeviceAttachmentBaseRefWithTag;
  if ( !DeviceAttachmentBaseRefWithTag )
  {
    v7 = -1073741808;
    goto LABEL_16;
  }
  for ( i = IoGetAttachedDeviceReferenceWithTag(DeviceAttachmentBaseRefWithTag, 0x43706E50u);
        ;
        i = IoGetLowerDeviceObjectWithTag((__int64)v11, 0x43706E50u) )
  {
    v11 = i;
    if ( !i )
      break;
    Pool2 = (PVOID **)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      ObfDereferenceObjectWithTag(v11, 0x43706E50u);
      v7 = -1073741670;
      goto LABEL_16;
    }
    Pool2[2] = (PVOID *)v11;
    v13 = p_P;
    if ( *p_P != &P )
LABEL_6:
      __fastfail(3u);
    Pool2[1] = p_P;
    *Pool2 = &P;
    *v13 = Pool2;
    p_P = (PVOID *)Pool2;
  }
  v19 = (PVOID *)P;
  v20 = a2;
  v21 = a3;
  v22 = 0;
  v29 = a2;
  while ( v19 != &P )
  {
    v23 = *((_QWORD *)v19[2] + 1);
    if ( !v23 )
    {
      RtlInitUnicodeString(&DestinationString, L"?");
LABEL_52:
      Length = DestinationString.Length;
      goto LABEL_34;
    }
    if ( *(_QWORD *)(v23 + 64) && *(_WORD *)(v23 + 56) >= 2u )
    {
      Length = _mm_cvtsi128_si32(*(__m128i *)(v23 + 56));
      for ( DestinationString = *(UNICODE_STRING *)(v23 + 56); Length >= 2u; DestinationString.Length = Length )
      {
        if ( DestinationString.Buffer[((unsigned __int64)Length >> 1) - 1] )
          break;
        Length -= 2;
      }
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      Length = DestinationString.Length;
    }
    if ( !Length )
    {
      v26 = 272;
      v34 = 272;
      if ( !v8 )
      {
        v8 = ExAllocatePool2(0x100uLL);
        if ( !v8 )
        {
          v7 = -1073741670;
          goto LABEL_16;
        }
        v26 = v34;
      }
      v7 = ObQueryNameStringMode(v23, v8, v26, &v34, 0);
      if ( v7 >= 0 && v34 && *(_WORD *)v8 >= 2u )
      {
        v27 = *(__m128i *)v8;
        v28 = *(wchar_t **)(v8 + 8);
        *(_QWORD *)&DestinationString.Length = *(_QWORD *)v8;
        DestinationString.Buffer = v28;
        Length = _mm_cvtsi128_si32(v27);
        goto LABEL_34;
      }
      RtlInitUnicodeString(&DestinationString, L"?");
      v7 = 0;
      goto LABEL_52;
    }
LABEL_34:
    if ( v21 )
    {
      v20 = v29;
      if ( v29 >= (unsigned __int64)Length + 2 )
      {
        memmove(v21, DestinationString.Buffer, Length);
        v25 = &v21[(unsigned __int64)Length >> 1];
        *v25 = 0;
        v21 = v25 + 1;
        v20 = -2 - Length + v29;
        v29 = v20;
      }
    }
    else
    {
      v20 = v29;
    }
    v19 = (PVOID *)*v19;
    v22 += Length + 2;
  }
  v14 = (void *)v8;
  if ( v7 >= 0 )
  {
    if ( v21 && v20 >= 2 )
      *v21 = 0;
    v15 = v22 + 2;
    *v37 = v15;
    if ( !v36 || v15 > v35 )
    {
      v7 = -1073741789;
      v14 = (void *)v8;
    }
  }
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
LABEL_16:
  while ( 1 )
  {
    v16 = (PVOID *)P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_6;
    v18 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_6;
    P = *(PVOID *)P;
    *(_QWORD *)(v18 + 8) = &P;
    ObfDereferenceObjectWithTag(v16[2], 0x43706E50u);
    ExFreePoolWithTag(v16, 0);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x43706E50u);
  return (unsigned int)v7;
}
