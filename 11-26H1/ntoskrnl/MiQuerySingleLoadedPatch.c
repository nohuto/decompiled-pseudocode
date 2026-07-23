/*
 * XREFs of MiQuerySingleLoadedPatch @ 0x140A9D93C
 * Callers:
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A9DB18 (MiFindProcessImageHotPatchRecord.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQuerySingleLoadedPatch(
        __int64 *a1,
        _DWORD *a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6)
{
  _KPROCESS *Process; // r13
  ULONG_PTR v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // edi
  int v15; // ebx
  unsigned int ProcessImageHotPatchRecord; // ebx
  unsigned __int16 Length; // di
  unsigned __int64 v18; // rbx
  unsigned int CurrentProcessorColor; // eax
  int v20; // edx
  __int64 PoolMm; // rax
  __int64 v22; // rsi
  unsigned int v24; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  v24 = 0;
  DestinationString = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = MiObtainReferencedVadEx(a3, 0LL, (int *)&v24);
  if ( v11 )
  {
    if ( (MiReadVadFlags(v11) & 0x1C) != 8 || (unsigned int)MiVadDeleted(v12) )
    {
      ProcessImageHotPatchRecord = -1073741800;
      MiUnlockAndDereferenceVad((volatile signed __int32 *)v12);
    }
    else
    {
      v13 = *(_QWORD *)(***(_QWORD ***)(v12 + 80) + 56LL);
      v14 = *(_DWORD *)(v13 + 60);
      v15 = *(_DWORD *)(v13 + 72);
      MiUnlockAndDereferenceVad((volatile signed __int32 *)v12);
      ProcessImageHotPatchRecord = MiFindProcessImageHotPatchRecord(
                                     (_DWORD)Process,
                                     v14,
                                     v15,
                                     0,
                                     (__int64)&DestinationString);
      if ( (int)(ProcessImageHotPatchRecord + 0x80000000) < 0 || ProcessImageHotPatchRecord == -1073741275 )
      {
        Length = DestinationString.Length;
        v18 = DestinationString.Length + 48LL;
        if ( a6 < v18 )
        {
          *a1 = 0LL;
          *a2 = v18;
          ProcessImageHotPatchRecord = 0;
        }
        else
        {
          CurrentProcessorColor = MmGetCurrentProcessorColor();
          PoolMm = ExAllocatePoolMm(256LL, (unsigned int)v18, 1900571981, v20 | CurrentProcessorColor);
          v22 = PoolMm;
          if ( PoolMm )
          {
            *(_DWORD *)PoolMm = 1;
            *(_QWORD *)(PoolMm + 8) = -1LL;
            *(_DWORD *)(PoolMm + 24) = a4;
            *(_QWORD *)(PoolMm + 16) = a3;
            if ( Length )
            {
              *(_WORD *)(PoolMm + 34) = Length;
              *(_WORD *)(PoolMm + 32) = Length;
              *(_QWORD *)(PoolMm + 40) = PoolMm + 48;
              RtlCopyUnicodeString((PUNICODE_STRING)(PoolMm + 32), &DestinationString);
              *(_QWORD *)(v22 + 40) += a5 - v22;
            }
            *a1 = v22;
            *a2 = v18;
            ProcessImageHotPatchRecord = 0;
          }
          else
          {
            ProcessImageHotPatchRecord = -1073741670;
          }
        }
      }
    }
  }
  else
  {
    ProcessImageHotPatchRecord = v24;
  }
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  return ProcessImageHotPatchRecord;
}
