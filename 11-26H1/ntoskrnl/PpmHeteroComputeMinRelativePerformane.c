/*
 * XREFs of PpmHeteroComputeMinRelativePerformane @ 0x140ABE034
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void PpmHeteroComputeMinRelativePerformane()
{
  PBOOLEAN i; // rdi
  int v1; // eax
  unsigned int v2; // r8d
  int *v3; // r10
  unsigned int v4; // r9d
  __int64 Pool2; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  char v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-58h] BYREF
  char *v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 *v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  if ( !PpmHeteroMinRelativePerformance )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    PpmHeteroMinRelativePerformance = Pool2;
    if ( !Pool2 )
      goto LABEL_13;
    v6 = (unsigned __int8)PpmMaxCoreClasses;
    if ( PpmMaxCoreClasses )
    {
      v7 = (_DWORD *)Pool2;
      while ( v6 )
      {
        *v7++ = 0x10000;
        --v6;
      }
    }
  }
  for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
        i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
        i = *(PBOOLEAN *)i )
  {
    if ( !*((_DWORD *)i + 76) )
    {
      v4 = (unsigned __int8)PpmMaxCoreClasses;
      v2 = 0;
      if ( PpmMaxCoreClasses )
      {
        v3 = (int *)PpmHeteroMinRelativePerformance;
        do
        {
          if ( v2 > i[300] )
            break;
          v1 = *v3;
          if ( (unsigned int)*v3 >= *(_DWORD *)(**((_QWORD **)i + 39) + 64LL) )
            v1 = *(_DWORD *)(**((_QWORD **)i + 39) + 64LL);
          ++v2;
          *v3++ = v1;
        }
        while ( v2 < v4 );
      }
    }
  }
LABEL_13:
  if ( !PpmHeteroMinRelativePerformance
    && (unsigned int)dword_140E07560 > 5
    && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v8 = PpmMaxCoreClasses;
    v12 = 1LL;
    v11 = &v8;
    v9 = 0x1000000LL;
    v13 = &v9;
    v14 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004D873, 0LL, 0LL, 4u, &v10);
  }
}
