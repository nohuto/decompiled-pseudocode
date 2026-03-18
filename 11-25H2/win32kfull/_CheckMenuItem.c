/*
 * XREFs of _CheckMenuItem @ 0x1401D1DE0
 * Callers:
 *     NtUserCheckMenuItem @ 0x1401D1CB0 (NtUserCheckMenuItem.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNLookUpItem @ 0x1400476D8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall CheckMenuItem(__int64 a1, unsigned int a2, __int16 a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v10[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v11; // [rsp+30h] [rbp-18h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v10, a1);
  v5 = v11;
  if ( !v11 )
    v5 = *(_QWORD **)v10[0];
  v6 = MNLookUpItem(v5, a2, a3 & 0x400, 0LL);
  if ( v6 )
  {
    v7 = *(unsigned int *)(*(_QWORD *)v6 + 4LL);
    v8 = *(_DWORD *)(*(_QWORD *)v6 + 4LL) & 8;
    *(_DWORD *)(*(_QWORD *)v6 + 4LL) = v7 ^ ((unsigned __int8)a3 ^ *(_BYTE *)(*(_QWORD *)v6 + 4LL) & 8) & 8;
  }
  else
  {
    v8 = -1;
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v10, v7);
  return v8;
}
