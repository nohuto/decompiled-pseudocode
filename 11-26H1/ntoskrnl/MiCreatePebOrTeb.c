/*
 * XREFs of MiCreatePebOrTeb @ 0x140999EB0
 * Callers:
 *     MmCreateTeb @ 0x140999CF8 (MmCreateTeb.c)
 *     MmCreatePeb @ 0x140ACC600 (MmCreatePeb.c)
 *     MiInitializeWowPeb @ 0x140ACCF84 (MiInitializeWowPeb.c)
 * Callees:
 *     MiAllocateFromSubAllocatedRegion @ 0x140999F24 (MiAllocateFromSubAllocatedRegion.c)
 */

__int64 __fastcall MiCreatePebOrTeb(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdx

  *a3 = 0LL;
  if ( (_DWORD)a1 )
  {
    v3 = 6256LL;
    if ( (_DWORD)a1 != 4 )
    {
      switch ( (_DWORD)a1 )
      {
        case 5:
          v3 = 12336LL;
          break;
        case 6:
          v3 = 14448LL;
          break;
        case 1:
          v3 = 1208LL;
          break;
        case 2:
          v3 = 2048LL;
          break;
      }
    }
  }
  else
  {
    v3 = 2008LL;
  }
  return MiAllocateFromSubAllocatedRegion(a1, (v3 + 4095) & 0xFFFFF000LL);
}
