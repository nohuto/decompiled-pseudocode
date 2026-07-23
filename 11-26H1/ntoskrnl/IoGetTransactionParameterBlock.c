/*
 * XREFs of IoGetTransactionParameterBlock @ 0x1404406C0
 * Callers:
 *     IopTrackLink @ 0x140AD048C (IopTrackLink.c)
 * Callees:
 *     <none>
 */

PTXN_PARAMETER_BLOCK __stdcall IoGetTransactionParameterBlock(PFILE_OBJECT FileObject)
{
  PTXN_PARAMETER_BLOCK result; // rax

  result = (PTXN_PARAMETER_BLOCK)FileObject->FileObjectExtension;
  if ( result )
    return (PTXN_PARAMETER_BLOCK)result->TransactionObject;
  return result;
}
