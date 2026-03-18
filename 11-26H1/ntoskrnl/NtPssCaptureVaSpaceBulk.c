/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x140845040
 * Callers:
 *     DifNtPssCaptureVaSpaceBulkWrapper @ 0x140680D80 (DifNtPssCaptureVaSpaceBulkWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     MmProbeAndLockPagesEx @ 0x14039FAC0 (MmProbeAndLockPagesEx.c)
 *     IoAllocateMdl @ 0x14040BA40 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwPssCaptureVaSpaceBulk @ 0x140725CF0 (ZwPssCaptureVaSpaceBulk.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     MmQueryVirtualMemory @ 0x14091F870 (MmQueryVirtualMemory.c)
 */

__int64 __fastcall NtPssCaptureVaSpaceBulk(ULONG_PTR a1, unsigned __int64 a2, __int128 *a3, SIZE_T a4, __int64 *a5)
{
  __int128 *v6; // r14
  unsigned int v7; // ebx
  PMDL v8; // r15
  int VirtualMemory; // edi
  char PreviousMode; // r12
  __int64 ULong64FromUser; // rax
  PMDL Mdl; // rax
  unsigned __int64 v14; // r12
  _QWORD *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // [rsp+48h] [rbp-F0h]
  __int64 v18; // [rsp+50h] [rbp-E8h]
  PVOID Object; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v22; // [rsp+80h] [rbp-B8h]
  __int64 v23; // [rsp+90h] [rbp-A8h]
  ULONG_PTR v24; // [rsp+98h] [rbp-A0h]
  unsigned __int64 v25; // [rsp+A0h] [rbp-98h]
  __int128 *v26; // [rsp+A8h] [rbp-90h]
  SIZE_T v27; // [rsp+B0h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-80h]
  _BYTE v29[48]; // [rsp+C0h] [rbp-78h] BYREF

  v6 = a3;
  v18 = a2;
  v24 = a1;
  v25 = a2;
  v26 = a3;
  v27 = a4;
  Object = 0LL;
  memset(v29, 0, sizeof(v29));
  v21 = 0LL;
  v17 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v23 = 0LL;
  VirtualMemory = 0;
  if ( a4 < 0x10 )
    return 3221225476LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v22 = 0LL;
    ProbeForWrite(a3, a4, 8u);
    if ( a5 )
    {
      ULong64FromUser = RtlReadULong64FromUser(a5);
      RtlWriteULong64ToUser(a5, ULong64FromUser);
    }
    v22 = *v6;
    a2 = v18;
  }
  else
  {
    v22 = *a3;
  }
  if ( (_DWORD)v22 )
  {
    if ( (v22 & 0xFFFFFFFC) != 0 )
    {
      VirtualMemory = -1073741637;
    }
    else
    {
      if ( MmIsUserAddress(a2) )
      {
        if ( PreviousMode )
        {
          Mdl = IoAllocateMdl(v6, a4, 0, 0, 0LL);
          v8 = Mdl;
          if ( !Mdl )
            goto LABEL_16;
          VirtualMemory = MmProbeAndLockPagesEx((__int64)Mdl, 2uLL);
          if ( VirtualMemory < 0 )
            goto LABEL_42;
          v7 = 2;
          v6 = (__int128 *)((v8->MdlFlags & 5) != 0
                          ? v8->MappedSystemVa
                          : MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000010u));
          if ( !v6 )
          {
LABEL_16:
            VirtualMemory = -1073741670;
            goto LABEL_42;
          }
        }
        else
        {
          v8 = 0LL;
        }
        if ( a1 != -1LL )
        {
          VirtualMemory = ObpReferenceObjectByHandleWithTag(a1, 0x41737350u, (__int64)&Object, 0LL, 0LL);
          if ( VirtualMemory < 0 )
            goto LABEL_42;
          if ( (*((_DWORD *)Object + 383) & 0x1000) != 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x41737350u);
            VirtualMemory = -1073741790;
            goto LABEL_42;
          }
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v29);
          v7 |= 1u;
        }
        if ( PreviousMode )
        {
          VirtualMemory = ZwPssCaptureVaSpaceBulk(-1LL, v18);
        }
        else
        {
          *((_DWORD *)v6 + 1) = 0;
          v17 = 16LL;
          v14 = a4 - 16;
          v15 = v6 + 1;
          while ( v14 >= 0x30 )
          {
            if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
            {
              VirtualMemory = -1073741749;
              break;
            }
            VirtualMemory = MmQueryVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 48LL, (__int64)&v21, 2);
            if ( VirtualMemory < 0 )
            {
              if ( *((_DWORD *)v6 + 1) )
                VirtualMemory = 0;
              break;
            }
            v14 -= v21;
            v17 += v21;
            v16 = *v15 + v15[3];
            v15 += 6;
            ++*((_DWORD *)v6 + 1);
            *((_QWORD *)v6 + 1) = v16;
          }
          if ( VirtualMemory >= 0 && *((_QWORD *)v6 + 1) != 0x7FFFFFFF0000LL )
            VirtualMemory = 261;
        }
        goto LABEL_42;
      }
      VirtualMemory = -1073741503;
    }
  }
  else
  {
    VirtualMemory = -1073741811;
  }
LABEL_42:
  if ( (v7 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v29, 0);
  if ( v8 )
  {
    if ( v7 >= 2 )
      MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  if ( a5 )
    *a5 = v17;
  return (unsigned int)VirtualMemory;
}
