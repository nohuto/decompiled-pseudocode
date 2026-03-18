/*
 * XREFs of NtDCompositionGetFrameId @ 0x140114DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?GetFrameId@CConnection@DirectComposition@@QEAA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x14011743C (-GetFrameId@CConnection@DirectComposition@@QEAA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetFrameId(unsigned int a1, void *a2)
{
  unsigned int v4; // ebx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v6; // rdi
  unsigned int v7; // edx
  __int64 Src; // [rsp+48h] [rbp+10h] BYREF
  struct DirectComposition::CConnection *v10; // [rsp+50h] [rbp+18h]

  v4 = 0;
  if ( a2 && a1 <= 2 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v6 = DefaultConnection;
    v10 = DefaultConnection;
    if ( DefaultConnection )
    {
      Src = DirectComposition::CConnection::GetFrameId(DefaultConnection, a1);
      if ( Src )
        RtlCopyToUser(a2, &Src, 8uLL);
      else
        v4 = -1073741823;
      DirectComposition::CConnection::Release(v6, v7);
    }
    else
    {
      v4 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
