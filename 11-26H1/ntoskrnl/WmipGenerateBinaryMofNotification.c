/*
 * XREFs of WmipGenerateBinaryMofNotification @ 0x14082A070
 * Callers:
 *     WmipUpdateDataSource @ 0x140A09CB4 (WmipUpdateDataSource.c)
 *     WmipAddDataSource @ 0x140A0ABF4 (WmipAddDataSource.c)
 *     WmipDSCleanup @ 0x140A0C620 (WmipDSCleanup.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfExW @ 0x140459FE8 (RtlStringCbPrintfExW.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WmipProcessEvent @ 0x140A0CBD4 (WmipProcessEvent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall WmipGenerateBinaryMofNotification(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  char *Pool2; // rax
  char *v11; // rbx
  size_t v12; // rbp
  int v13; // eax
  _DWORD *v14; // rcx
  __int64 v15; // [rsp+38h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 72) )
  {
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(a1 + 16);
      if ( (v5 & 2) != 0 )
      {
        v6 = v4;
        v7 = -1LL;
        do
          ++v7;
        while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v4) + 2 * v7) );
        v8 = v7 + 2;
      }
      else
      {
        if ( (v5 & 1) == 0 )
          return;
        v9 = -1LL;
        do
          ++v9;
        while ( *(_WORD *)(*(_QWORD *)(a1 + 88) + 2 * v9 + 4) );
        v8 = v9 + 7;
        v6 = v4;
      }
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      v11 = Pool2;
      if ( Pool2 )
      {
        memset_0(Pool2, 0, 2 * v8 + 74);
        *(_DWORD *)v11 = 2 * v8 + 74;
        *((_DWORD *)v11 + 1) = 3;
        *((_QWORD *)v11 + 1) = 1LL;
        *((_DWORD *)v11 + 11) = 10;
        *(_OWORD *)(v11 + 24) = *a2;
        *((_QWORD *)v11 + 2) = MEMORY[0xFFFFF78000000014];
        *((_DWORD *)v11 + 15) = 2 * v8 + 2;
        v12 = 2 * v8 - 2;
        *((_DWORD *)v11 + 12) = 64;
        *((_DWORD *)v11 + 14) = 72;
        *((_WORD *)v11 + 32) = 0;
        *((_WORD *)v11 + 36) = 0;
        v13 = *(_DWORD *)(a1 + 16);
        if ( (v13 & 2) != 0 )
        {
          *((_WORD *)v11 + 37) = v12;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)v11 + 38, v12, *(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a1 + 88) + 8 * v6));
        }
        else if ( (v13 & 1) != 0 )
        {
          v14 = *(_DWORD **)(a1 + 88);
          LODWORD(v15) = v4 + *v14;
          RtlStringCbPrintfExW((NTSTRSAFE_PWSTR)v11 + 38, v12, 0LL, 0LL, 0x200u, L"%ws%d", v14 + 1, v15);
          *((_WORD *)v11 + 37) = v12;
        }
        WmipProcessEvent(v11);
        ExFreePoolWithTag(v11, 0);
      }
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 72) );
  }
}
