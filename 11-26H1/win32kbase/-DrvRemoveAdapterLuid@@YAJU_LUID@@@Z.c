/*
 * XREFs of ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x14002CC70
 * Callers:
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14002CC1C (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1401F654C (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DrvRemoveAdapterLuid(struct _LUID a1)
{
  int v1; // r12d
  __int64 v2; // rbp
  _QWORD *v3; // r14
  __int64 v4; // rsi
  int v5; // ecx
  __int64 v6; // rcx
  unsigned int v8; // edi
  struct _LUID Source1; // [rsp+50h] [rbp+8h] BYREF

  Source1 = a1;
  v1 = 0;
  v2 = 0LL;
  v3 = *(_QWORD **)(((__int64 (__fastcall *)(_QWORD))W32GetSessionState)(a1) + 88);
  v4 = v3[232];
  while ( (unsigned int)v2 < *(_DWORD *)(v4 + 1573028) )
  {
    if ( RtlCompareMemory(&Source1, (const void *)(v3[154] + 8 * v2), 8uLL) == 8 )
    {
      --*(_BYTE *)(v3[155] + v2);
      if ( !*(_BYTE *)(v2 + v3[155]) )
      {
        v1 = 1;
        if ( *(_DWORD *)(v4 + 1573028) + ~(_DWORD)v2 )
        {
          v8 = *(_DWORD *)(v4 + 1573028) + ~(_DWORD)v2;
          memmove((void *)(v3[154] + 8 * v2), (const void *)(v3[154] + 8LL * (unsigned int)(v2 + 1)), 8LL * v8);
          memmove((void *)(v3[155] + v2), (const void *)(v3[155] + (unsigned int)(v2 + 1)), v8);
        }
      }
      break;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  v5 = *(_DWORD *)(v4 + 1573028);
  if ( (_DWORD)v2 == v5 )
    return 3221225524LL;
  if ( v1 )
  {
    v6 = (unsigned int)(v5 - 1);
    ++*(_DWORD *)(v4 + 1573024);
    *(_DWORD *)(v4 + 1573028) = v6;
    *(_QWORD *)(v3[154] + 8 * v6) = 0LL;
    *(_BYTE *)(*(unsigned int *)(v4 + 1573028) + v3[155]) = 0;
  }
  return 0LL;
}
