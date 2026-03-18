/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x140331D44
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x140331DF0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x140331E30 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x140331E60 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x140332000 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x140332040 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1403320B0 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1403320E0 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x140332140 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1403321A0 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1403321F0 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x140332260 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x140332290 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1403322F0 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure(int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // edx

  v2 = 0;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  if ( (*(_DWORD *)(v3 + 4768) & 4) != 0 )
  {
    if ( *(_DWORD *)(v3 + 4772) )
      goto LABEL_6;
    v4 = MEMORY[0xFFFFF78000000014];
    if ( MEMORY[0xFFFFF78000000014] > *(_QWORD *)(v3 + 4760) + 0x117D78400LL )
    {
      *(_DWORD *)(v3 + 4772) = 1;
      *(_DWORD *)(v3 + 4776) = v4;
    }
    if ( *(_DWORD *)(v3 + 4772) )
    {
LABEL_6:
      if ( (RtlRandom((PULONG)(v3 + 4776)) & *(_DWORD *)(v3 + 4780)) == 0 )
        return 1;
    }
  }
  return v2;
}
