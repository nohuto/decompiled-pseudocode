/*
 * XREFs of sub_14009DC38 @ 0x14009DC38
 * Callers:
 *     sub_140030B40 @ 0x140030B40 (sub_140030B40.c)
 * Callees:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_140090500 @ 0x140090500 (sub_140090500.c)
 *     sub_1400A1F00 @ 0x1400A1F00 (sub_1400A1F00.c)
 */

__int64 __fastcall sub_14009DC38(__int64 a1)
{
  struct tagVARIANT *v2; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1920), &LockHandle);
  *(_QWORD *)(a1 + 1896) = 0LL;
  *(_DWORD *)(a1 + 1904) = 0;
  ++*(_DWORD *)(a1 + 1912);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !*(_BYTE *)(a1 + 3368)
    || (result = sub_1400A1F00(*(_QWORD *)(a1 + 560)), !(_BYTE)result)
    || *(_DWORD *)(a1 + 1396) )
  {
    if ( (byte_1401694F4 & 1) != 0 )
      sub_140090500(
        a1 + 177,
        a1 + 168,
        a1 + 2104,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4720LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5064LL,
        *(_BYTE *)(a1 + 104),
        a1 + 2104,
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        *(_BYTE *)(a1 + 506) & 1,
        4);
    LOBYTE(v2) = *(_BYTE *)(a1 + 104);
    return CMSPAddress::get_DynamicTerminalClasses(*(CMSPAddress **)(a1 + 24), v2);
  }
  return result;
}
