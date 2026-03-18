/*
 * XREFs of PopPepCompleteComponentIdleState @ 0x140506C08
 * Callers:
 *     PopFxProcessWork @ 0x1403AEEC0 (PopFxProcessWork.c)
 * Callees:
 *     PopPlNotifyDeviceFState @ 0x1403AE02C (PopPlNotifyDeviceFState.c)
 *     PopPepProcessEvent @ 0x1403AFCF0 (PopPepProcessEvent.c)
 *     PopPepReleaseActivityLink @ 0x1403B0E80 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x1403B14B8 (PopPepRequestWork.c)
 *     PopPepLockActivityLink @ 0x1403B3A70 (PopPepLockActivityLink.c)
 */

void __fastcall PopPepCompleteComponentIdleState(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  char v5; // si
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // [rsp+20h] [rbp-18h]
  KIRQL v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  v3 = 208LL * a2 + a1 + 192;
  v5 = PopPepLockActivityLink(a1, (__int64 *)v3, 6u, 1u, &v9);
  v6 = *(_QWORD *)(v3 + 64);
  if ( *(_DWORD *)(v6 + 12) == 1 )
  {
    *(_DWORD *)(v6 + 12) = 2;
    v7 = *(_DWORD *)(v3 + 104) + *(_DWORD *)(a1 + 120);
    **(_DWORD **)(v3 + 64) |= 8u;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 104));
    PopPepRequestWork(a1, v7, *(_DWORD *)(v3 + 104) + *(_DWORD *)(a1 + 120));
    PopPepReleaseActivityLink(a1, (_DWORD *)v3, v5, v9);
  }
  else
  {
    PopPepReleaseActivityLink(a1, (_DWORD *)v3, v5, v9);
    PopPepProcessEvent(a1, (volatile LONG *)v3, 1u, 6u, v8, 0LL);
    PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), a2, *(_DWORD *)(v3 + 180), *(_DWORD *)(v3 + 176), 1);
  }
}
