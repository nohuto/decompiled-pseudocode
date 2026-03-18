/*
 * XREFs of ?AddPublicObject@@YAHIPEAXK@Z @ 0x1402CC608
 * Callers:
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CCE44 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD704 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD950 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1402CC8A0 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1402CC8F4 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 */

__int64 __fastcall AddPublicObject(unsigned int a1, void *a2, int a3)
{
  struct tagPUBOBJ *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx

  if ( a1 == 2 || a1 == 9 || a1 == 130 )
  {
    v6 = IsObjectPublic(a2);
    if ( v6 )
    {
      v13 = *((_DWORD *)v6 + 4);
      if ( v13 < 2147483646 )
      {
        *((_DWORD *)v6 + 4) = v13 + 1;
        return 1LL;
      }
      UserSetLastError(-1073741675);
    }
    else
    {
      v7 = Win32AllocPoolZInit(24LL, 878998357LL);
      v10 = (_QWORD *)v7;
      if ( v7 )
      {
        *(_DWORD *)(v7 + 16) = 1;
        *(_QWORD *)(v7 + 8) = a2;
        *(_DWORD *)(v7 + 20) = a3;
        v11 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19824);
        *v10 = v11;
        *(_QWORD *)(W32GetUserSessionState(v11, v12) + 19824) = v10;
        GiveObject(a1, a2, 0);
        return 1LL;
      }
    }
  }
  return 0LL;
}
