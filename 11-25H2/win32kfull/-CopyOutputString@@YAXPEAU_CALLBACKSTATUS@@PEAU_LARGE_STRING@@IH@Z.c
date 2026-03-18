/*
 * XREFs of ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x14011BBD0
 * Callers:
 *     ClientGetListboxString @ 0x140061F10 (ClientGetListboxString.c)
 *     xxxClientExpandStringW @ 0x1401247A8 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x140148EF0 (xxxClientLoadStringW.c)
 *     SfnOUTSTRING @ 0x1401791B0 (SfnOUTSTRING.c)
 *     SfnINCNTOUTSTRING @ 0x1401FA710 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402BA540 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     WCSToMBEx @ 0x14011BD24 (WCSToMBEx.c)
 *     strncpycch @ 0x14011BDE0 (strncpycch.c)
 *     MBToWCSEx @ 0x14011BE0C (MBToWCSEx.c)
 */

void __fastcall CopyOutputString(volatile void **a1, struct _LARGE_STRING *a2, int a3, int a4)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int16 *v9; // rcx
  unsigned int v10; // edx
  _WORD *v11; // rbx
  _WORD *i; // r8
  __int16 v13; // ax
  __int64 v14; // r8
  volatile void *v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // eax
  unsigned int v20; // eax

  v6 = *((unsigned int *)a1 + 2);
  LODWORD(v7) = a3;
  if ( (_DWORD)v6 )
    ProbeForRead(a1[2], (unsigned int)v6, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( *((int *)a2 + 1) < 0 )
  {
    v14 = *((unsigned int *)a1 + 2);
    v15 = a1[2];
    if ( a4 )
    {
      if ( (unsigned int)v7 < (unsigned int)v14 )
        v14 = (unsigned int)v7;
      LODWORD(v7) = strncpycch(*((_QWORD *)a2 + 1), v15, v14);
    }
    else
    {
      v16 = (unsigned int)v14 >> 1;
      if ( *(_DWORD *)a1 < (unsigned int)v16 )
        v16 = *(unsigned int *)a1;
      v17 = WCSToMBEx(0LL, v15, v16, (char *)a2 + 8, v7);
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
      v19 = *((_DWORD *)a1 + 2);
      if ( (unsigned int)v18 >= v19 )
        v18 = v19;
      v20 = MBToWCSEx(v6, a1[2], v18, (char *)a2 + 8, v7);
      if ( v20 < (unsigned int)v7 )
      {
        LODWORD(v7) = v20;
        *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v20) = 0;
      }
    }
    else
    {
      v9 = (__int16 *)a1[2];
      v10 = *((_DWORD *)a1 + 2) >> 1;
      if ( (unsigned int)v7 < v10 )
        v10 = v7;
      v11 = (_WORD *)*((_QWORD *)a2 + 1);
      for ( i = v11; v10; --v10 )
      {
        v13 = *v9++;
        *v11++ = v13;
        if ( !v13 )
          break;
      }
      v7 = v11 - i;
    }
    LODWORD(v7) = 2 * v7;
  }
  *(_DWORD *)a2 = v7;
}
