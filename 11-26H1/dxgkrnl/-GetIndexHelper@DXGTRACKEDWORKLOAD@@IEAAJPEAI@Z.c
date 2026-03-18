/*
 * XREFs of ?GetIndexHelper@DXGTRACKEDWORKLOAD@@IEAAJPEAI@Z @ 0x14020A5B0
 * Callers:
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH@Z @ 0x14020A4C0 (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::GetIndexHelper(DXGTRACKEDWORKLOAD *this, unsigned int *a2)
{
  __int64 i; // rax
  __int64 v4; // rdx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
  {
    v4 = *((_QWORD *)this + 11);
    if ( !*(_BYTE *)(i + v4) )
    {
      *(_BYTE *)(i + v4) = 1;
      *a2 = i;
      return 0LL;
    }
  }
  return 2147483674LL;
}
