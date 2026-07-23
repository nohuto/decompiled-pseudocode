/*
 * XREFs of MiUpdatePfnBackingStore @ 0x140401584
 * Callers:
 *     MiModwriterAssignPageFileAddresses @ 0x140400260 (MiModwriterAssignPageFileAddresses.c)
 *     MiStoreWriteModifiedPagePostIssue @ 0x140401104 (MiStoreWriteModifiedPagePostIssue.c)
 * Callees:
 *     MiMakePageFilePte @ 0x140298330 (MiMakePageFilePte.c)
 */

unsigned __int64 __fastcall MiUpdatePfnBackingStore(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r11
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 result; // rax
  __int64 v10; // r9
  unsigned __int64 PageFilePte; // r8
  __int64 v12; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v15; // rdx
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v16[0] = v3;
  v6 = (v3 >> 2) & 1;
  v7 = a3;
  v8 = v3;
  if ( (unsigned __int64)v16 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v16 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v12 = v3;
    if ( (v3 & 1) != 0 && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v15 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v16 >> 3) & 0x1FF));
          if ( (v15 & 0x20) != 0 )
            v12 = v3 | 0x20;
          v8 = v12 | 0x42;
          if ( (v15 & 0x42) == 0 )
            v8 = v12;
        }
      }
    }
  }
  v16[0] = v8 & ((v8 & 0x400) != 0 ? -5LL : -65537LL);
  result = v16[0];
  if ( (v3 & 0x400) == 0 )
    result = v16[0] & 0xFFFFFFFFFFFFFFF3uLL;
  if ( a2 )
  {
    v10 = *(unsigned __int16 *)(a2 + 172);
    if ( result )
    {
      if ( qword_140E2D8C0 )
      {
        if ( (result & 0x10) != 0 )
          LODWORD(result) = result & 0xFFFFFFEF;
        else
          LODWORD(result) = qword_140E2D8C8 & result;
      }
      PageFilePte = (unsigned int)result | (unsigned __int64)(v7 << 32);
      if ( qword_140E2D8C0 )
      {
        if ( (qword_140E2D8C0 & PageFilePte) != 0 )
          PageFilePte |= 0x10uLL;
        else
          PageFilePte |= qword_140E2D8C0;
      }
    }
    else
    {
      PageFilePte = MiMakePageFilePte(v7);
    }
    result = (v10 << 12) ^ (PageFilePte ^ (v10 << 12)) & 0xFFFFFFFFFFFF0FFFuLL | 8;
    if ( (_DWORD)v6 )
      result = (v10 << 12) ^ (PageFilePte ^ (v10 << 12)) & 0xFFFFFFFFFFFF0FFFuLL | 0xC;
  }
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
