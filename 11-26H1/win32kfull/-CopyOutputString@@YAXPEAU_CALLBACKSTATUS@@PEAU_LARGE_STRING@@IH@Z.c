/*
 * XREFs of ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x140129E80
 * Callers:
 *     xxxClientExpandStringW @ 0x140008DFC (xxxClientExpandStringW.c)
 *     SfnOUTSTRING @ 0x140035930 (SfnOUTSTRING.c)
 *     xxxClientLoadStringW @ 0x1400CCAE8 (xxxClientLoadStringW.c)
 *     ClientGetListboxString @ 0x1401296BC (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x14020E220 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402D52D0 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     WCSToMBEx @ 0x140129570 (WCSToMBEx.c)
 *     strncpycch @ 0x1401ECA98 (strncpycch.c)
 *     MBToWCSEx @ 0x14021FB40 (MBToWCSEx.c)
 */

void __fastcall CopyOutputString(volatile void **a1, struct _LARGE_STRING *a2, int a3, int a4)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned int v9; // r10d
  __int16 *v10; // rcx
  unsigned int v11; // r10d
  _WORD *v12; // rbx
  _WORD *i; // rdx
  __int16 v14; // ax
  WCHAR *v15; // rdx
  unsigned int v16; // r10d
  ULONG v17; // eax
  __int64 v18; // r8
  unsigned int v19; // eax
  ULONG v20; // [rsp+28h] [rbp-20h]

  v6 = *((unsigned int *)a1 + 2);
  LODWORD(v7) = a3;
  if ( (_DWORD)v6 )
    ProbeForRead(a1[2], (unsigned int)v6, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  v9 = *((_DWORD *)a1 + 2);
  if ( *((int *)a2 + 1) < 0 )
  {
    v15 = (WCHAR *)a1[2];
    if ( a4 )
    {
      if ( (unsigned int)v7 < v9 )
        v9 = v7;
      LODWORD(v7) = strncpycch(*((_QWORD *)a2 + 1), v15, v9);
    }
    else
    {
      v16 = v9 >> 1;
      if ( *(_DWORD *)a1 < v16 )
        v16 = *(_DWORD *)a1;
      v17 = WCSToMBEx(0, v15, v16, (PCHAR *)a2 + 1, v7, v20);
      if ( v17 < (unsigned int)v7 )
      {
        LODWORD(v7) = v17;
        *(_BYTE *)(v17 + *((_QWORD *)a2 + 1)) = 0;
      }
    }
  }
  else
  {
    if ( a4 )
    {
      v18 = *(unsigned int *)a1;
      if ( (unsigned int)v18 >= v9 )
        v18 = v9;
      v19 = MBToWCSEx(v6, a1[2], v18, (char *)a2 + 8, v7);
      if ( v19 < (unsigned int)v7 )
      {
        LODWORD(v7) = v19;
        *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v19) = 0;
      }
    }
    else
    {
      v10 = (__int16 *)a1[2];
      v11 = v9 >> 1;
      if ( (unsigned int)v7 < v11 )
        v11 = v7;
      v12 = (_WORD *)*((_QWORD *)a2 + 1);
      for ( i = v12; v11; --v11 )
      {
        v14 = *v10++;
        *v12++ = v14;
        if ( !v14 )
          break;
      }
      v7 = v12 - i;
    }
    LODWORD(v7) = 2 * v7;
  }
  *(_DWORD *)a2 = v7;
}
