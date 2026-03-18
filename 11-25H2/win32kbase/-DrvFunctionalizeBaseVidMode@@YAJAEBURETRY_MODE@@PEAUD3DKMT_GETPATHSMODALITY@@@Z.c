/*
 * XREFs of ?DrvFunctionalizeBaseVidMode@@YAJAEBURETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019CE28
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x140157D0C (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvFunctionalizeBaseVidMode(const struct RETRY_MODE *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 (__fastcall *v9)(_QWORD, struct D3DKMT_GETPATHSMODALITY *); // rbx
  __int64 v10; // rcx
  int CcdRawmodeFlag; // eax

  v2 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 26707;
  }
  v5 = *((_DWORD *)a1 + 1);
  v6 = 0xFFFFFFFFLL;
  if ( v5 == -1 )
  {
    if ( *((_DWORD *)a1 + 2) == -1 )
    {
      v6 = *((unsigned __int16 *)a2 + 10);
      if ( *((_WORD *)a2 + 10) )
      {
        v7 = *((_QWORD *)a2 + 7);
        do
        {
          ++v2;
          v7 &= 0xFFFFFBFFFE7CFE78uLL;
        }
        while ( v2 < (unsigned int)v6 );
        *((_QWORD *)a2 + 7) = v7;
      }
      goto LABEL_14;
    }
  }
  else if ( !v5 )
  {
    goto LABEL_14;
  }
  if ( *((_DWORD *)a1 + 2) )
  {
    if ( *((_WORD *)a2 + 10) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 26740;
    }
    v6 = 0xFFFFFBFFFE7EFF7CuLL;
    v8 = *((_QWORD *)a2 + 7) & 0xFFFFFBFFFE7EFF7CuLL;
    *((_BYTE *)a2 + 184) = 0;
    *((_DWORD *)a2 + 47) = 1;
    *((_QWORD *)a2 + 7) = v8 | 0x20304;
    *((_DWORD *)a2 + 34) = 9;
    *((_DWORD *)a2 + 52) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 53) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 38) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 39) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 40) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 41) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 43) = 21;
    *((_DWORD *)a2 + 42) = 0;
    *((_QWORD *)a2 + 22) = 0LL;
  }
LABEL_14:
  v9 = *(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *))(DxDdGetDxgkWin32kInterface(v6) + 152);
  CcdRawmodeFlag = GetCcdRawmodeFlag(v10);
  return v9(CcdRawmodeFlag | 0x8000u, a2);
}
