/*
 * XREFs of ExpQueryLegacyDriverInformation @ 0x14077338C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IopAppendLegacyVeto @ 0x1407B5224 (IopAppendLegacyVeto.c)
 *     IopGetLegacyVetoListDrivers @ 0x1409C0B9C (IopGetLegacyVetoListDrivers.c)
 *     IopGetLegacyVetoListDeviceNode @ 0x1409C0E20 (IopGetLegacyVetoListDeviceNode.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpQueryLegacyDriverInformation(__int64 a1, unsigned int *a2)
{
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  size_t Length; // rdx
  unsigned int v7; // esi
  PVOID P; // [rsp+28h] [rbp-80h] BYREF
  _DWORD v10[2]; // [rsp+38h] [rbp-70h] BYREF
  const WCHAR *v11; // [rsp+40h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-60h] BYREF
  PVOID *p_P; // [rsp+58h] [rbp-50h] BYREF
  int v14; // [rsp+60h] [rbp-48h]
  int v15; // [rsp+64h] [rbp-44h]
  int *v16; // [rsp+68h] [rbp-40h]
  int *v17; // [rsp+70h] [rbp-38h]
  int v18; // [rsp+C0h] [rbp+18h] BYREF
  int v19; // [rsp+C8h] [rbp+20h] BYREF

  DestinationString = 0LL;
  v15 = 0;
  v10[1] = 0;
  P = 0LL;
  v19 = 0;
  v18 = 0;
  if ( !PnPInitialized )
  {
    v4 = 0;
    goto LABEL_12;
  }
  p_P = &P;
  v14 = 0;
  v16 = &v19;
  v17 = &v18;
  IopGetLegacyVetoListDrivers(&p_P);
  v4 = v18;
  if ( v18 < 0 )
    goto LABEL_10;
  if ( !v19 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    IopGetLegacyVetoListDeviceNode(IopRootDeviceNode, &p_P);
    ExReleaseResourceLite(&IopDeviceTreeLock);
    KeLeaveCriticalRegion();
    v4 = v18;
  }
  if ( v4 < 0 )
    goto LABEL_10;
  if ( v19 )
  {
    v10[0] = 0x20000;
    v11 = &word_140B8A320;
    IopAppendLegacyVeto(&p_P, v10);
    v4 = v18;
  }
  if ( v4 < 0 )
  {
LABEL_10:
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      v4 = v18;
    }
LABEL_12:
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  RtlInitUnicodeString(&DestinationString, (PCWSTR)P);
  Length = DestinationString.Length;
  v7 = DestinationString.Length + 24;
  v18 = v7;
  if ( v7 <= *a2 )
  {
    *(_DWORD *)a1 = v19;
    *(_WORD *)(a1 + 8) = Length;
    *(_QWORD *)(a1 + 16) = a1 + 24;
    memmove((void *)(a1 + 24), DestinationString.Buffer, Length);
  }
  else
  {
    v4 = -2147483643;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  *a2 = v7;
  return (unsigned int)v4;
}
