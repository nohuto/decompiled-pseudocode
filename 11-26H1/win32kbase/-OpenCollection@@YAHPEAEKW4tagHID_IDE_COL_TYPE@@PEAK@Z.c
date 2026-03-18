/*
 * XREFs of ?OpenCollection@@YAHPEAEKW4tagHID_IDE_COL_TYPE@@PEAK@Z @ 0x14020A6B4
 * Callers:
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x140209BAC (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OpenCollection(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  __int64 UserSessionState; // rax
  __int64 v10; // rcx
  int v11; // ebx

  v4 = (unsigned int)*a4;
  v5 = 0;
  if ( (int)v4 + 2 < a2 )
  {
    v5 = 1;
    UserSessionState = W32GetUserSessionState(a1, a2, a3);
    v10 = (unsigned int)(v4 + 1);
    *(_DWORD *)(UserSessionState + 248) = v4;
    *(_BYTE *)(v4 + a1) = -95;
    if ( a3 )
    {
      v11 = a3 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          *(_BYTE *)(v10 + a1) = 2;
        else
          v5 = 0;
      }
      else
      {
        *(_BYTE *)(v10 + a1) = 0;
      }
    }
    else
    {
      *(_BYTE *)(v10 + a1) = 1;
    }
    *a4 += 2;
  }
  return v5;
}
