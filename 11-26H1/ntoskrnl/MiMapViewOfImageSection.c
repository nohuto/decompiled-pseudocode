/*
 * XREFs of MiMapViewOfImageSection @ 0x14099E35C
 * Callers:
 *     MiFinalizeLagePageImageMapping @ 0x140777C90 (MiFinalizeLagePageImageMapping.c)
 *     MiMapViewOfSection @ 0x1409941C8 (MiMapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14043B530 (MiCheckPurgeAndUpMapCount.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404FAD0C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiRemoveVadEvent @ 0x14052A9E4 (MiRemoveVadEvent.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiRemoveSharedCommitNode @ 0x140998C50 (MiRemoveSharedCommitNode.c)
 *     MiInitializeImageMapParameters @ 0x14099E4F4 (MiInitializeImageMapParameters.c)
 *     MiAllocateImageVad @ 0x14099E928 (MiAllocateImageVad.c)
 *     MiSelectImageMapAddress @ 0x14099EAF8 (MiSelectImageMapAddress.c)
 *     MiInitializeImageVad @ 0x14099ED2C (MiInitializeImageVad.c)
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 *     MiReleaseVadEventBlocks @ 0x140A01D8C (MiReleaseVadEventBlocks.c)
 *     MiDereferencePerSessionProtos @ 0x140A9AEB4 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        void *a1,
        __int64 a2,
        __int64 *a3,
        void *a4,
        void *a5,
        int a6,
        int a7,
        int a8)
{
  __int64 result; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v17; // rbx
  struct _KLOCK_ENTRIES *v18; // r9
  int v19; // r14d
  int v20; // eax
  bool v21; // zf
  __int16 v22; // ax
  unsigned int SessionId; // eax
  void *v24; // rcx
  PVOID P[5]; // [rsp+28h] [rbp-E0h] BYREF
  int v26; // [rsp+50h] [rbp-B8h]
  int v27; // [rsp+54h] [rbp-B4h]
  int v28; // [rsp+5Ch] [rbp-ACh]
  int v29; // [rsp+60h] [rbp-A8h]
  __int64 v30; // [rsp+70h] [rbp-98h]
  int v31; // [rsp+78h] [rbp-90h]
  _QWORD v32[14]; // [rsp+A8h] [rbp-60h] BYREF

  memset_0(P, 0, 0xF0uLL);
  v27 = a6;
  v26 = a7;
  v31 = a8;
  v30 = *a3;
  P[4] = a1;
  P[1] = (PVOID)a2;
  P[3] = a4;
  P[2] = a5;
  result = MiInitializeImageMapParameters(P);
  if ( (int)result >= 0 )
  {
    v13 = *(_QWORD *)(a2 + 88);
    MiCheckPurgeAndUpMapCount((__int64)a1);
    if ( (int)MiAllocateImageVad(P) < 0 )
    {
      MiDereferenceControlArea((__int64)a1);
      return 3221225626LL;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v17 = P[0];
      v29 |= 0x20u;
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, v13, v14, v15);
      v19 = MiSelectImageMapAddress(P);
      if ( v19 < 0 || (v20 = MiInitializeImageVad(P), v19 = v20, v20 < 0) )
      {
        v22 = v29;
        if ( (v29 & 0x200) != 0 )
        {
          SessionId = PsGetSessionIdEx(v13);
          MiDereferencePerSessionProtos(a1, SessionId);
          v22 = v29;
        }
        if ( (v22 & 0x400) != 0 )
        {
          MiReturnCrossPartitionControlAreaCharges((__int64)a1);
          v22 = v29;
        }
        if ( (v22 & 0x100) != 0 )
          MiRemoveSharedCommitNode((__int64)a1, v13, 0, v18);
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v13);
        if ( (v29 & 0x80u) != 0 )
          MiRemoveVadEvent((__int64)v17, v32);
        if ( v17 )
        {
          MiReleaseVadEventBlocks(v17);
          v24 = (void *)v17[17];
          if ( v24 )
            ObfDereferenceObjectWithTag(v24, 0x63536D4Du);
          ExFreePoolWithTag(v17, 0);
        }
        MiDereferenceControlArea((__int64)a1);
        return (unsigned int)v19;
      }
      else
      {
        v28 = v20;
        MiInsertVad((ULONG_PTR)v17, v13, 0);
        result = MiHandleInsertedImageVad(P);
        if ( (int)result >= 0 )
        {
          v21 = (v29 & 0x800) == 0;
          *a3 = v30;
          if ( v21 )
          {
            if ( a5 )
            {
              if ( (*(_BYTE *)(v13 + 368) & 1) == 0 )
                *(_DWORD *)(a2 + 56) |= 4u;
            }
          }
        }
      }
    }
  }
  return result;
}
