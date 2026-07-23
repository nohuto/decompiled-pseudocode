/*
 * XREFs of ObpObjectRefInfoAddTrace @ 0x1407C7EF4
 * Callers:
 *     ObpPushRefDerefInfoNoLock @ 0x1407732BC (ObpPushRefDerefInfoNoLock.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     ObpGetObjectRefInfo @ 0x1407C7B64 (ObpGetObjectRefInfo.c)
 */

int __fastcall ObpObjectRefInfoAddTrace(__int64 a1, unsigned int a2, __int16 a3, unsigned int a4, __int64 a5)
{
  unsigned int *ObjectRefInfo; // rax
  unsigned int *v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rcx

  ObjectRefInfo = ObpGetObjectRefInfo(a1);
  v9 = ObjectRefInfo;
  if ( ObjectRefInfo )
  {
    v10 = ObjectRefInfo[8];
    if ( v10 )
    {
      do
      {
        v11 = v10 - 1;
        if ( a2 >= *(unsigned int *)((char *)v9 + 18 * v11 + 40) )
          break;
        v12 = 9LL * v10;
        v13 = *((_WORD *)v9 + 9 * v11 + 28);
        *(_OWORD *)((char *)v9 + 2 * v12 + 40) = *(_OWORD *)((char *)v9 + 18 * v11 + 40);
        *((_WORD *)v9 + v12 + 28) = v13;
        v10 = v11;
      }
      while ( (_DWORD)v11 );
    }
    v14 = 9LL * v10;
    *(_QWORD *)((char *)v9 + 2 * v14 + 50) = a5;
    *((_WORD *)v9 + v14 + 22) = a3;
    *(unsigned int *)((char *)v9 + 2 * v14 + 40) = a2;
    *(unsigned int *)((char *)v9 + 2 * v14 + 46) = a4;
    LODWORD(ObjectRefInfo) = ++v9[8];
    if ( (unsigned int)ObjectRefInfo >= ObpMaxObjectRefTraces )
    {
      LODWORD(ObjectRefInfo) = DbgPrintEx(0, 1u, "ObpObjectRefInfoAddTrace - ObjectRefInfo refs overflow\n");
      v9[8] = 0;
    }
  }
  return (int)ObjectRefInfo;
}
