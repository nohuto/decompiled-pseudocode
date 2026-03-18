/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1403493C0
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x140349460 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1403494A0 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1403494D0 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x140349670 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1403496B0 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x140349720 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x140349750 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1403497B0 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x140349810 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x140349860 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1403498D0 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x140349900 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x140349960 (VerifierEngCreateWnd.c)
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
  if ( (*(_DWORD *)(v3 + 4760) & 4) != 0 )
  {
    if ( *(_DWORD *)(v3 + 4764) )
      goto LABEL_6;
    v4 = MEMORY[0xFFFFF78000000014];
    if ( MEMORY[0xFFFFF78000000014] > *(_QWORD *)(v3 + 4752) + 0x117D78400LL )
    {
      *(_DWORD *)(v3 + 4764) = 1;
      *(_DWORD *)(v3 + 4768) = v4;
    }
    if ( *(_DWORD *)(v3 + 4764) )
    {
LABEL_6:
      if ( (RtlRandom((PULONG)(v3 + 4768)) & *(_DWORD *)(v3 + 4772)) == 0 )
        return 1;
    }
  }
  return v2;
}
