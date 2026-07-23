/*
 * XREFs of ExQuerySystemLockInformation @ 0x140C05598
 * Callers:
 *     ExpGetLockInformation @ 0x140778318 (ExpGetLockInformation.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 */

__int64 __fastcall ExQuerySystemLockInformation(int a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int v9; // edi
  PVOID v10; // rcx
  _DWORD *v11; // rsi
  KIRQL v12; // al
  unsigned __int8 *v13; // rdx
  KIRQL v14; // r8
  unsigned __int8 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax

  v4 = 8;
  if ( a3 < 8 )
  {
    v9 = -1073741820;
    goto LABEL_20;
  }
  v10 = ExPageLockHandle;
  v11 = a2 + 2;
  v9 = 0;
  *a2 = 0;
  MmLockPagableSectionByHandle(v10);
  v12 = ExAcquireSpinLockShared(&ExpResourceSpinLock);
  v13 = *(unsigned __int8 **)&ExSaPageGroupDescriptorArrayLock.ResourceIndex;
  v14 = v12;
  while ( v13 != &ExSaPageGroupDescriptorArrayLock.ResourceIndex )
  {
    ++*a2;
    v4 += 48;
    if ( v4 < 0x30 )
    {
      v9 = -1073741675;
      break;
    }
    if ( a3 < v4 )
    {
      v9 = -1073741820;
      goto LABEL_17;
    }
    v11[2] = 1;
    v15 = 0LL;
    if ( !a1 )
      v15 = v13;
    *(_QWORD *)v11 = v15;
    v16 = *((_QWORD *)v13 + 6);
    if ( (*((_DWORD *)v13 + 14) & 2) != 0 )
    {
      v16 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v16 & 3) != 0 )
    {
      goto LABEL_15;
    }
    if ( !v16 )
    {
LABEL_15:
      v17 = 0LL;
      goto LABEL_16;
    }
    v17 = *(_QWORD *)(v16 + 1296);
LABEL_16:
    *((_QWORD *)v11 + 2) = v17;
    v11[6] = *((_DWORD *)v13 + 16);
    v11[7] = *((_DWORD *)v13 + 17);
    v11[10] = *((_DWORD *)v13 + 18);
    v11[11] = *((_DWORD *)v13 + 19);
    v11 += 12;
LABEL_17:
    v13 = *(unsigned __int8 **)v13;
  }
  ExReleaseSpinLockShared(&ExpResourceSpinLock, v14);
  MmUnlockPagableImageSection(ExPageLockHandle);
LABEL_20:
  if ( a4 )
    *a4 = v4;
  return v9;
}
