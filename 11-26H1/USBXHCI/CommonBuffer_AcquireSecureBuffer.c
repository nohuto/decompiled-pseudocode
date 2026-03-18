/*
 * XREFs of CommonBuffer_AcquireSecureBuffer @ 0x140040174
 * Callers:
 *     XilCommonBuffer_AcquireBufferEx @ 0x140003F88 (XilCommonBuffer_AcquireBufferEx.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140036890 (XilEndpoint_AllocateStreamContextArray.c)
 * Callees:
 *     memset @ 0x140059840 (memset.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1400827F8 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 */

__int64 __fastcall CommonBuffer_AcquireSecureBuffer(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  __int64 Pool2; // rax
  __int64 v10; // rbx
  void ***v11; // r14
  void **v12; // rcx

  v4 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 112LL, 1229146200LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    v11 = (void ***)(Pool2 + 104);
    if ( (int)SecureDmaEnabler_AllocateCommonBufferPage(
                *(_QWORD *)(*(_QWORD *)a1 + 104LL),
                0,
                a2,
                (int)Pool2 + 104,
                0LL) < 0 )
    {
      ExFreePoolWithTag((PVOID)v10, 0x49434858u);
    }
    else
    {
      memset(**v11, 0, a2);
      v12 = *v11;
      v4 = v10;
      *(_QWORD *)(v10 + 16) = **v11;
      *(_QWORD *)(v10 + 24) = v12[1];
      *(_DWORD *)(v10 + 40) = a2;
      *(_DWORD *)(v10 + 44) = a2;
      *(_DWORD *)(v10 + 64) = a4;
      *(_QWORD *)(v10 + 72) = a3;
      *(_DWORD *)(v10 + 80) = 3;
    }
  }
  return v4;
}
